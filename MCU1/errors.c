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
#include <mcu1_iomap.h>

const int errors_size = 10;

Error errors[errors_size] = {
    { &O_CN8_06, 0 },
    { &O_CN8_01, 0 },
    { &O_CN8_07, 0 },
    { &O_CN8_02, 0 },
    { &O_CN8_08, 0 },
    { &O_CN8_03, 0 },
    { &O_CN8_09, 0 },
    { &O_CN8_04, 0 },
    { &O_CN8_10, 0 },
    { &O_CN8_05, 0 }
};
