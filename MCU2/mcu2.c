// mcu2.c
//
// Main - Ponto de entrada do programa.
//
// Versão: 1.0.0
//
// Autores:
//   * 17/05/2017 - Fábio H. Priamo <priamo74@gmail.com>
//   *
//
// TCM - Testador de Cabos Microcontrolado
// Copyright: Lupa Tecnologia e Sistemas LTDA 2017.
//

#define TELL_MCU1_TO_SHOW_ERRORS      1
#define TELL_MCU1_NOT_TO_SHOW_ERRORS  0

#include <mega64.h>
#include <stdlib.h>
#include <ioutils.h>
#include <tests.h>
#include <ipsp.h>
#include <conectors.h>
#include <loading_error.h>
#include <mcu2_iomap.h>
#include <delay.h>

//
// DEFINIÇÔES GLOBAIS
//

void main(void)
{
    //
    // DEFINIÇÔES DE VARIÁVEIS LOCAIS
    //
    
    LoadingError loading_error;
    int mcu1_has_failures = 0;
    int mcu2_has_failures = 0;

    #include "mcu2_init.inc"
    
    // Tempo extra para garantir que MCU1 já tenha inicializado e esteja operante.
    delay_ms(100);
        
    //
    // MAIN - CORPO PRINCIPAL
    //
    
    // Carrega todos os testes da memória EEPROM.  
    loading_error = load_tests();

    // Envia à MCU1 o código do status do carregamento.    
    ipsp_send_word(loading_error);

    // Se ouve erro de carregamento, o programa para de ser executado.
    if (loading_error != LOADING_OK)
    {
         return;
    }

    // Aguarda MCU1 terminar os testes e sinalizar o resultado.    
    mcu1_has_failures = ipsp_wait_bit();

    // Roda todos os testes de MCU2.    
    mcu2_has_failures = run_tests();
    
    if (mcu1_has_failures || mcu2_has_failures)
    {
        // Diz à MCU1 para mostrar seus erros de teste. 
        ipsp_send_bit(TELL_MCU1_TO_SHOW_ERRORS);

        // Mostra todos os erros de teste de MCU2.        
        show_errors();
        
        // Apita o buzzer e pisca o led indicador de erro.
        while(1)
        {
            high(O_LED_ERR);
            high(O_BUZZER);
            delay_ms(800);
            low(O_LED_ERR);
            low(O_BUZZER);
            delay_ms(800);
        }    
    }
    else
    {
        // Diz à MCU1 para não mostrar os erros de teste.
        ipsp_send_bit(TELL_MCU1_NOT_TO_SHOW_ERRORS);
        
        // Acende o led indicador de sucesso.
        high(O_LED_OK);
    }
    
    // FIM :)
}



