// errors.c
//
// Coleção de erros dos testes.
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

#include <errors.h>
#include <mcu2_iomap.h>

const int errors_size = 22;

Error errors[errors_size] = {
     { &O_CN7_11, 0},
     { &O_CN7_02, 0},
     { &O_CN7_12, 0},
     { &O_CN7_03, 0},
     { &O_CN7_04, 0},
     { &O_CN7_13, 0},
     { &O_CN7_01, 0},
     { &O_CN7_06, 0},
 	 { &O_CN7_07, 0},
 	 { &O_CN7_09, 0},
 	 { &O_CN7_16, 0},
 	 { &O_CN7_15, 0},
 	 { &O_CN7_05, 0},
 	 { &O_CN7_14, 0},
 	 { &O_CN7_10, 0},
 	 { &O_CN6_03, 0},
 	 { &O_CN6_02, 0},
 	 { &O_CN6_01, 0},
 	 { &O_CN7_08, 0},
 	 { &O_CN6_06, 0},
 	 { &O_CN6_05, 0},
 	 { &O_CN6_04, 0}
};
