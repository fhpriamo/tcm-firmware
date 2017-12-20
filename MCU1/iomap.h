// mcu1_iomap.h
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

#ifndef TCM_MCU1_IOMAP_INCLUDED_
#define TCM_MCU1_IOMAP_INCLUDED_ 

#include <ioutils.h>

//
// TESTE
//

extern IO O_CN8_06;
extern IO O_CN8_01;
extern IO O_CN8_07;
extern IO O_CN8_02;
extern IO O_CN8_08;
extern IO O_CN8_03;
extern IO O_CN8_09;
extern IO O_CN8_04;
extern IO O_CN8_10;
extern IO O_CN8_05;

extern IO I_CN3_09;
extern IO I_CN3_04;
extern IO I_CN3_07;
extern IO I_CN3_02;
extern IO I_CN3_08;
extern IO I_CN3_03;
extern IO I_CN3_06;
extern IO I_CN3_05;
extern IO I_CN3_10;
extern IO I_CN3_01;

//
// IHM
//

extern IO O_LED_LOADING_ERROR;

//
// COMUNICAÇÂO
// 

extern IO O_IPSP_TX_STAT;
extern IO O_IPSP_TX_DATA;
extern IO I_IPSP_RX_STAT;
extern IO I_IPSP_RX_DATA;

#endif
