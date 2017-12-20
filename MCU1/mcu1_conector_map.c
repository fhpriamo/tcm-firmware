// mcu1_conector_map.c
//
// 
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
#include <mcu1_iomap.h>

#define NUM_CONECTORS 20

IO* conectors[NUM_CONECTORS] = {
	&O_CN8_01,
	&O_CN8_02,
	&O_CN8_03,
	&O_CN8_04,
	&O_CN8_05,
	&O_CN8_06,
	&O_CN8_07,
	&O_CN8_08,
	&O_CN8_09,
	&O_CN8_10,
	&I_CN3_01,
	&I_CN3_02,
	&I_CN3_03,
	&I_CN3_04,
	&I_CN3_05,
	&I_CN3_06,
	&I_CN3_07,
	&I_CN3_08,
	&I_CN3_09,
	&I_CN3_10,
};