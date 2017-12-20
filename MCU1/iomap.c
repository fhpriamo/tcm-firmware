// mcu1_iomap.c
//
// Mapeamento das portas de IO da MCU 1.
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

#include <ioutils.h>
#include <mcu1_iomap.h>

//
// TESTE
//

IO O_CN8_06 = { BIT5, _PORTB };
IO O_CN8_01 = { BIT4, _PORTB };
IO O_CN8_07 = { BIT3, _PORTB };
IO O_CN8_02 = { BIT1, _PORTB };
IO O_CN8_08 = { BIT0, _PORTB };
IO O_CN8_03 = { BIT7, _PORTE };
IO O_CN8_09 = { BIT6, _PORTE };
IO O_CN8_04 = { BIT5, _PORTE };
IO O_CN8_10 = { BIT4, _PORTE };
IO O_CN8_05 = { BIT3, _PORTE };
IO I_CN3_09 = { BIT7, _PINA };
IO I_CN3_04 = { BIT6, _PINA };
IO I_CN3_07 = { BIT3, _PINA };
IO I_CN3_02 = { BIT2, _PINA };
IO I_CN3_08 = { BIT5, _PINA };
IO I_CN3_03 = { BIT4, _PINA };
IO I_CN3_06 = { BIT1, _PINA };
IO I_CN3_05 = { BIT2, _PING };
IO I_CN3_10 = { BIT7, _PINC };
IO I_CN3_01 = { BIT0, _PINA };

//
// IHM
//

IO O_LED_LOADING_ERROR = { BIT6, _PORTB };

//
// COMUNICAÇÂO
//

IO O_IPSP_TX_STAT = { BIT5, _PORTF }; // na MCU2 é PORTG 1
IO O_IPSP_TX_DATA = { BIT4, _PORTF }; // na MCU2 é PORTG 0
IO I_IPSP_RX_STAT = { BIT6, _PINF };  // na MCU2 é PORTC 0 
IO I_IPSP_RX_DATA = { BIT7, _PINB };  // na MCU2 é PORTE 0 (jumper)


//IO I_MCU2_STATUS = { BIT6, _PINF };
//IO O_SIGNAL_HAS_ERRORS = { BIT5,_PORTF };
//IO O_SIGNAL_FINISHED = { BIT4, _PORTF };
//IO I_COM_LINE_1 = { BIT7, _PINB };