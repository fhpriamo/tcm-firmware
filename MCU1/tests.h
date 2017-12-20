// tests.h
//
// Rotinas de teste.
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

#ifndef TCM_TESTS_INCLUDED_
#define TCM_TESTS_INCLUDED_

#include <ioutils.h>
#include <loading_error.h>

//
// Duração aproximada do pulso de teste (em ms)
//
#define TIME_ON_HIGH 120

//
// Tempo entre um teste e outro (em ms)
// 
#define TIME_BETWEEN_TESTS 0

//
// Endereços conhecidos da memória EEPROM
//

//
// Cabeçalho de assinatura
//
#define EEP_HEADER_SIGNATURE        (unsigned char) 0

//
// Cabeçalho indicador do número de testes
//
#define EEP_HEADER_NUM_TESTS        (unsigned char) 1

//
// Começo do bloco de dados
//
#define EEP_DATA_BLOCK_BEGIN        (unsigned char) 2

//
// Informações sobre um teste.
//
typedef struct test_fixture
{
    short failed;
    IO* input;
    IO* output;
} TestFixture;

//
// Executa um teste.
//
int test(struct test_fixture* c);

//
// Carrega todos os testes da memória EEPROM.
//
LoadingError load_tests();

//
//
//
int run_tests();

//
//
//
void show_errors();

//
//
//
int has_error();



#endif
