// mcu1.c
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

#include <mega64.h>
#include <stdlib.h>
#include <ioutils.h>
#include <tests.h>
#include <loading_error.h>
#include <ipsp.h>
#include <conectors.h>
#include <delay.h>

//
// DEFINIÇÔES GLOBAIS
//

void main(void)
{
    //
    // DEFINIÇÔES DE VARIÁVEIS LOCAIS
    //
    LoadingError mcu1_loading_error;
    LoadingError mcu2_loading_error;
    int has_failures = 0;
    int must_show_errors = 0;

    #include "mcu1_init.inc"
    
    // Tempo extra para garantir que MCU2 já tenha inicializado e esteja operante.
    delay_ms(50);
        
    //
    // MAIN - CORPO PRINCIPAL
    //

    // Carrega todos os testes de MCU1    
    mcu1_loading_error = load_tests();

    // Mostra erros de carregamento de MCU1, se houver algum.
    if (mcu1_loading_error != LOADING_OK)
    {
         show_loading_error(mcu1_loading_error, HARDWARE_MCU1);
    }
    
    // Aguarda MCU2 enviar o resultado dos carregamentos dos testes.
    mcu2_loading_error = ipsp_wait_word();

    // Mostra erros de carregamento de MCU2, se houver algum.
    if (mcu2_loading_error != LOADING_OK)
    {
        show_loading_error(mcu2_loading_error, HARDWARE_MCU2);
    }
    
    // Executa todos os testes de MCU1
    has_failures = run_tests();
    
    // Sinaliza o resultado dos testes para MCU2.
    ipsp_send_bit(has_failures);
    
    // Aguarda comando da MCU2 para mostrar os erros.
    must_show_errors = ipsp_wait_bit();
    
    if (must_show_errors)
    {
        show_errors();
    }
    
    // FIM :)
}



