// mcu2_iomap.c
//
// Mapeamento de IO
//
//
// Autores:
//   * 17/03/2017 - Fábio H. Priamo <priamo74@gmail.com>
//   *
//
// TCM - Testador de Cabos Microcontrolado
// Copyright: Lupa Tecnologia e Sistemas LTDA 2017.
//

#include <ioutils.h>
#include <mcu2_iomap.h>

//
// TESTE
//

IO O_CN7_11 = { BIT2, _PORTE };
IO O_CN7_12 = { BIT4, _PORTE };
IO O_CN7_01 = { BIT6, _PORTE };
IO O_CN7_07 = { BIT3, _PORTB };
IO O_CN7_16 = { BIT4, _PORTB };
IO O_CN7_05 = { BIT6, _PORTB };
IO O_CN7_10 = { BIT3, _PORTG };
IO O_CN7_04 = { BIT7, _PORTE };
IO O_CN6_02 = { BIT0, _PORTD };
IO O_CN7_08 = { BIT2, _PORTD };
IO O_CN6_05 = { BIT4, _PORTD };
IO O_CN7_02 = { BIT3, _PORTE };
IO O_CN7_03 = { BIT5, _PORTE };
IO O_CN7_09 = { BIT1, _PORTB };
IO O_CN7_13 = { BIT0, _PORTB };
IO O_CN7_15 = { BIT5, _PORTB };
IO O_CN7_14 = { BIT7, _PORTB };
IO O_CN6_03 = { BIT4, _PORTG };
IO O_CN7_06 = { BIT2, _PORTB };
IO O_CN6_01 = { BIT1, _PORTD };
IO O_CN6_06 = { BIT3, _PORTD };
IO O_CN6_04 = { BIT7, _PORTD };

IO I_CN4_16 = { BIT1, _PINC };
IO I_CN4_08 = { BIT2, _PINC };
IO I_CN4_15 = { BIT3, _PINC };
IO I_CN4_07 = { BIT4, _PINC };
IO I_CN4_14 = { BIT5, _PINC };
IO I_CN4_06 = { BIT6, _PINC };
IO I_CN4_13 = { BIT7, _PINC };
IO I_CN4_05 = { BIT2, _PING };
IO I_CN4_12 = { BIT7, _PINA };
IO I_CN4_04 = { BIT6, _PINA };
IO I_CN4_11 = { BIT5, _PINA };
IO I_CN4_03 = { BIT4, _PINA };

IO I_CN4_10 = { BIT3, _PINA };
IO I_CN4_02 = { BIT2, _PINA };
IO I_CN4_09 = { BIT1, _PINA };
IO I_CN4_01 = { BIT0, _PINA };
IO I_CN5_06 = { BIT7, _PINF };
IO I_CN5_03 = { BIT6, _PINF };
IO I_CN5_05 = { BIT5, _PINF };
IO I_CN5_02 = { BIT4, _PINF };
IO I_CN5_04 = { BIT3, _PINF };
IO I_CN5_01 = { BIT2, _PINF };

//
// IHM
//

IO O_LED_OK  = { BIT5, _PORTD };
IO O_LED_ERR = { BIT6, _PORTD };
IO O_BUZZER  = { BIT0, _PORTF };

//
// COMUNICAÇÂO IPSP
//

IO O_IPSP_TX_STAT = { BIT0, _PORTC }; // na MCU1 é  PORTF 6
IO O_IPSP_TX_DATA = { BIT0, _PORTE }; // na MCU1 é  PORTB 7 (jumper)
IO I_IPSP_RX_STAT = { BIT1, _PING };  // na MCU1 é  PORTF 5
IO I_IPSP_RX_DATA = { BIT0, _PING };  // na MCU1 é  PORTF 4
