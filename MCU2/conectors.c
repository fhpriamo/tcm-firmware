// conectors.c
//
// Definição dos conectores da MCU 2.
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
#include <mcu2_iomap.h>

flash int NUM_CONECTORS = 44;

IO* conectors[NUM_CONECTORS] = {
    &O_CN6_01,
    &O_CN6_02,
    &O_CN6_03,
    &O_CN6_04,
    &O_CN6_05,
    &O_CN6_06,
    &O_CN7_01,
    &O_CN7_02,
    &O_CN7_03,
    &O_CN7_04,
    &O_CN7_05,
    &O_CN7_06,
    &O_CN7_07,
    &O_CN7_08,
    &O_CN7_09,
    &O_CN7_10,
    &O_CN7_11,
    &O_CN7_12,
    &O_CN7_13,
    &O_CN7_14,
    &O_CN7_15,
    &O_CN7_16,
    &I_CN4_01,
    &I_CN4_02,
    &I_CN4_03,
    &I_CN4_04,
    &I_CN4_05,
    &I_CN4_06,
    &I_CN4_07,
    &I_CN4_08,
    &I_CN4_09,
    &I_CN4_10,
    &I_CN4_11,
    &I_CN4_12,
    &I_CN4_13,
    &I_CN4_14,
    &I_CN4_15,
    &I_CN4_16,
    &I_CN5_01,
    &I_CN5_02,
    &I_CN5_03,
    &I_CN5_04,
    &I_CN5_05,
    &I_CN5_06
};
