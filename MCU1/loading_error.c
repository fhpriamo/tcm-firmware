// loading_error.c
//
// Erros de carregamento.
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

#include <loading_error.h>
#include <mcu1_iomap.h>
#include <delay.h>

void show_loading_error(LoadingError err, Hardware h)
{
    int i;
    
    while (1)
    {    
        for(i = 0; i < h; i++)
        {
            high(O_LED_LOADING_ERROR);
            delay_ms(1600);
            low(O_LED_LOADING_ERROR);
            delay_ms(1600);
        }
        
        for (i = 0; i < err; i++)
        {
            high(O_LED_LOADING_ERROR);
            delay_ms(200);
            low(O_LED_LOADING_ERROR);
            delay_ms(200);
        }
        delay_ms(1600);
    }
}