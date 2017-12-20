// mcu2_test_fixtures.h
//
// Estruturas para criar testes de cabos
//
//
// Autores:
//   * 17/03/2017 - Fábio H. Priamo <priamo74@gmail.com>
//   *
//
// TCM - Testador de Cabos Microcontrolado
// Copyright: Lupa Tecnologia e Sistemas LTDA 2017.
//

#ifndef _MCU2_TEST_FIXTURES_INCLUDED_
#define _MCU2_TEST_FIXTURES_INCLUDED_

#include <tests.h> 

//
// Número de testes
//
#define NUM_TESTS 22

//
// Coleção de testes
//
struct test_fixture * test_fixtures[NUM_TESTS];

//
// Testes
//
struct test_fixture T_TM01_07_TO_CN05_02;		
struct test_fixture T_TM01_05_TO_CN05_03;		
struct test_fixture T_TM01_17_TO_CN05_07;		
struct test_fixture T_TM01_18_TO_CN05_08;        
struct test_fixture T_TM01_06_TO_CN05_09;        
struct test_fixture T_TM01_19_TO_CN05_10;        
struct test_fixture T_TM01_15_TO_CN14_02;        
struct test_fixture T_TM01_02_TO_CN14_04;        
struct test_fixture T_TM01_14_TO_CN14_06;        
struct test_fixture T_TM01_03_TO_CN14_03_05_07;
struct test_fixture T_TM01_24_TO_CN11_01;        
struct test_fixture T_TM01_11_TO_CN11_03;        
struct test_fixture T_TM01_23_TO_CN11_05;        
struct test_fixture T_TM01_12_TO_CN11_08;        
struct test_fixture T_TM01_04_TO_CN18_04;        
struct test_fixture T_TM01_16_TO_CN18_03;        
struct test_fixture T_TM01_08_TO_CN18_06;        
struct test_fixture T_TM01_20_TO_CN18_05;        
struct test_fixture T_TM01_09_TO_CN18_04;        
struct test_fixture T_TM01_21_TO_CN18_03;        
struct test_fixture T_TM01_10_TO_CN18_02;        
struct test_fixture T_TM01_22_TO_CN18_01;        

#endif
