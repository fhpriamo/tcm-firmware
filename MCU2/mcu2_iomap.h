// mcu2_iomap.h
//
// Definições de variáveis para o mapeamento de IO
//
//
// Autores:
//   * 17/03/2017 - Fábio H. Priamo <priamo74@gmail.com>
//   *
//
// TCM - Testador de Cabos Microcontrolado
// Copyright: Lupa Tecnologia e Sistemas LTDA 2017.
//

#ifndef TCM_MCU2_IOMAP_INCLUDED_
#define TCM_MCU2_IOMAP_INCLUDED_ 

#include <ioutils.h>

//
// TESTE
//

extern IO O_CN7_11;
extern IO O_CN7_02;
extern IO O_CN7_12;
extern IO O_CN7_03;
extern IO O_CN7_04;
extern IO O_CN7_13;
extern IO O_CN7_01;
extern IO O_CN7_06;
extern IO O_CN7_07;
extern IO O_CN7_09;
extern IO O_CN7_16;
extern IO O_CN7_15;
extern IO O_CN7_05;
extern IO O_CN7_14;
extern IO O_CN7_10;
extern IO O_CN6_03;
extern IO O_CN6_02;
extern IO O_CN6_01;
extern IO O_CN7_08;
extern IO O_CN6_06;
extern IO O_CN6_05;
extern IO O_CN6_04;

extern IO I_CN4_09;
extern IO I_CN5_06;
extern IO I_CN4_02;
extern IO I_CN4_01;
extern IO I_CN5_03;
extern IO I_CN4_10;
extern IO I_CN4_07;
extern IO I_CN4_12;
extern IO I_CN4_07;
extern IO I_CN4_15;
extern IO I_CN4_05;
extern IO I_CN4_15;
extern IO I_CN4_11;
extern IO I_CN4_04;
extern IO I_CN4_13;
extern IO I_CN4_03;
extern IO I_CN4_06;
extern IO I_CN4_14;
extern IO I_CN4_08;
extern IO I_CN4_16;
extern IO I_CN5_02;
extern IO I_CN5_04;
extern IO I_CN5_01;
extern IO I_CN5_05;

//
// IHM
//

extern IO O_LED_OK;
extern IO O_LED_ERR;
extern IO O_BUZZER;

//
// COMUNICAÇÂO
//

extern IO O_IPSP_TX_STAT;
extern IO O_IPSP_TX_DATA;
extern IO I_IPSP_RX_STAT;
extern IO I_IPSP_RX_DATA;

// IO O_COM_LINE_1;
// IO I_MCU1_FINISHED;
// IO I_MCU1_HAS_ERRORS;
// IO O_MCU1_SHOW_ERRORS;

#endif
