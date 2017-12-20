// mcu2_test_fixtures.c
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

#include <mcu2_test_fixtures.h>

//
// TM01 07 -> CN05 02
//
T_TM01_07_TO_CN05_02.num_of_inputs = 1;
T_TM01_07_TO_CN05_02.inputs[0] = &I_CN05_02;
T_TM01_07_TO_CN05_02.output = &O_TM01_07;
T_TM01_07_TO_CN05_02.failed = 0;

//
// TM01 05 -> CN05 03
//
T_TM01_05_TO_CN05_03.num_of_inputs = 1;        
T_TM01_05_TO_CN05_03.inputs[0] = &I_CN05_03;        
T_TM01_05_TO_CN05_03.output = &O_TM01_05;        
T_TM01_05_TO_CN05_03.failed = 0;

//
// TM01 17 -> CN05 07
//
T_TM01_17_TO_CN05_07.num_of_inputs = 1;        
T_TM01_17_TO_CN05_07.inputs[0] = &I_CN05_07;        
T_TM01_17_TO_CN05_07.output = &O_TM01_17;        
T_TM01_17_TO_CN05_07.failed = 0;        

//
// TM01 18 -> CN05 08
//
T_TM01_18_TO_CN05_08.num_of_inputs = 1;        
T_TM01_18_TO_CN05_08.inputs[0] = &I_CN05_08;        
T_TM01_18_TO_CN05_08.output = &O_TM01_18;        
T_TM01_18_TO_CN05_08.failed = 0;        

//
// TM01 06 -> CN05 09
//
T_TM01_06_TO_CN05_09.num_of_inputs = 1;        
T_TM01_06_TO_CN05_09.inputs[0] = &I_CN05_09;        
T_TM01_06_TO_CN05_09.output = &O_TM01_06;        
T_TM01_06_TO_CN05_09.failed = 0;        

//
// TM01 19 -> CN05 10
//
T_TM01_19_TO_CN05_10.num_of_inputs = 1;        
T_TM01_19_TO_CN05_10.inputs[0] = &I_CN05_10;        
T_TM01_19_TO_CN05_10.output = &O_TM01_19;        
T_TM01_19_TO_CN05_10.failed = 0;        

//
// TM01 15 -> CN14 02
//
T_TM01_15_TO_CN14_02.num_of_inputs = 1;        
T_TM01_15_TO_CN14_02.inputs[0] = &I_CN14_02;        
T_TM01_15_TO_CN14_02.output = &O_TM01_15;        
T_TM01_15_TO_CN14_02.failed = 0;        

//
// TM01 02 -> CN14 04
//
T_TM01_02_TO_CN14_04.num_of_inputs = 1;        
T_TM01_02_TO_CN14_04.inputs[0] = &I_CN14_04;        
T_TM01_02_TO_CN14_04.output = &O_TM01_02;        
T_TM01_02_TO_CN14_04.failed = 0;        

//
// TM01 14 -> CN14 06
//
T_TM01_14_TO_CN14_06.num_of_inputs = 1;        
T_TM01_14_TO_CN14_06.inputs[0] = &I_CN14_06;        
T_TM01_14_TO_CN14_06.output = &O_TM01_14;        
T_TM01_14_TO_CN14_06.failed = 0;        

//
// TM01 03 -> CN14 03, 05 e 07
//
T_TM01_03_TO_CN14_03_05_07.num_of_inputs = 3;
T_TM01_03_TO_CN14_03_05_07.inputs[0] = &I_CN14_03;
T_TM01_03_TO_CN14_03_05_07.inputs[1] = &I_CN14_05;
T_TM01_03_TO_CN14_03_05_07.inputs[2] = &I_CN14_07;
T_TM01_03_TO_CN14_03_05_07.output = &O_TM01_03;
T_TM01_03_TO_CN14_03_05_07.failed = 0;

//
// TM01 24 -> CN11 01
//
T_TM01_24_TO_CN11_01.num_of_inputs = 1;        
T_TM01_24_TO_CN11_01.inputs[0] = &I_CN11_01;        
T_TM01_24_TO_CN11_01.output = &O_TM01_24;        
T_TM01_24_TO_CN11_01.failed = 0;        

//
// TM01 11 -> CN11 03
//
T_TM01_11_TO_CN11_03.num_of_inputs = 1;        
T_TM01_11_TO_CN11_03.inputs[0] = &I_CN11_03;       
T_TM01_11_TO_CN11_03.output = &O_TM01_11;        
T_TM01_11_TO_CN11_03.failed = 0;        

//
// TM01 23 -> CN11 05
//
T_TM01_23_TO_CN11_05.num_of_inputs = 1;        
T_TM01_23_TO_CN11_05.inputs[0] = &I_CN11_05;        
T_TM01_23_TO_CN11_05.output = &O_TM01_23;        
T_TM01_23_TO_CN11_05.failed = 0;        

//
// TM01 12 -> CN11 08
//
T_TM01_12_TO_CN11_08.num_of_inputs = 1;        
T_TM01_12_TO_CN11_08.inputs[0] = &I_CN11_08;        
T_TM01_12_TO_CN11_08.output = &O_TM01_12;        
T_TM01_12_TO_CN11_08.failed = 0;        

//
// TM01 04 -> CN18 04
//
T_TM01_04_TO_CN18_04.num_of_inputs = 1;        
T_TM01_04_TO_CN18_04.inputs[0] = &I_CN18_04;        
T_TM01_04_TO_CN18_04.output = &O_TM01_04;        
T_TM01_04_TO_CN18_04.failed = 0;        

//
// TM01 16 -> CN18 03
//
T_TM01_16_TO_CN18_03.num_of_inputs = 1;        
T_TM01_16_TO_CN18_03.inputs[0] = &I_CN18_03;        
T_TM01_16_TO_CN18_03.output = &O_TM01_16;        
T_TM01_16_TO_CN18_03.failed = 0;        

//
// TM01 08 -> CN18 06
//
T_TM01_08_TO_CN18_06.num_of_inputs = 1;        
T_TM01_08_TO_CN18_06.inputs[0] = &I_CN18_06;        
T_TM01_08_TO_CN18_06.output = &O_TM01_08;        
T_TM01_08_TO_CN18_06.failed = 0;        

//
// TM01 20 -> CN18 05
//
T_TM01_20_TO_CN18_05.num_of_inputs = 1;        
T_TM01_20_TO_CN18_05.inputs[0] = &I_CN18_05;        
T_TM01_20_TO_CN18_05.output = &O_TM01_20;        
T_TM01_20_TO_CN18_05.failed = 0;        

//
// TM01 09 -> CN18 04
//
T_TM01_09_TO_CN18_04.num_of_inputs = 1;        
T_TM01_09_TO_CN18_04.inputs[0] = &I_CN18_04;        
T_TM01_09_TO_CN18_04.output = &O_TM01_09;        
T_TM01_09_TO_CN18_04.failed = 0;        

//
// TM01 21 -> CN18 03
//
T_TM01_21_TO_CN18_03.num_of_inputs = 1;        
T_TM01_21_TO_CN18_03.inputs[0] = &I_CN18_03;        
T_TM01_21_TO_CN18_03.output = &O_TM01_21;        
T_TM01_21_TO_CN18_03.failed = 0;        

//
// TM01 10 -> CN18 02
//
T_TM01_10_TO_CN18_02.num_of_inputs = 1;        
T_TM01_10_TO_CN18_02.inputs[0] = &I_CN18_02;        
T_TM01_10_TO_CN18_02.output = &O_TM01_10;        
T_TM01_10_TO_CN18_02.failed = 0;        

//
// TM01 22 -> CN18 01
//
T_TM01_22_TO_CN18_01.num_of_inputs = 1;
T_TM01_22_TO_CN18_01.inputs[0] = &I_CN18_01;
T_TM01_22_TO_CN18_01.output = &O_TM01_22;
T_TM01_22_TO_CN18_01.failed = 0;

//
// Escalação dos testes
//
test_fixtures[0] = &T_TM01_02_TO_CN14_04;
test_fixtures[1] = &T_TM01_14_TO_CN14_06;
test_fixtures[2] = &T_TM01_03_TO_CN14_03_05_07;
test_fixtures[3] = &T_TM01_15_TO_CN14_02;
test_fixtures[4] = &T_TM01_04_TO_CN18_04;
test_fixtures[5] = &T_TM01_17_TO_CN05_07;
test_fixtures[6] = &T_TM01_09_TO_CN18_04;
test_fixtures[7] = &T_TM01_16_TO_CN18_03;
test_fixtures[8] = &T_TM01_05_TO_CN05_03;
test_fixtures[9] = &T_TM01_21_TO_CN18_03;
test_fixtures[10] = &T_TM01_06_TO_CN05_09;
test_fixtures[11] = &T_TM01_18_TO_CN05_08;
test_fixtures[12] = &T_TM01_07_TO_CN05_02;
test_fixtures[13] = &T_TM01_19_TO_CN05_10;
test_fixtures[14] = &T_TM01_08_TO_CN18_06;
test_fixtures[15] = &T_TM01_20_TO_CN18_05;
test_fixtures[16] = &T_TM01_10_TO_CN18_02;
test_fixtures[17] = &T_TM01_22_TO_CN18_01;
test_fixtures[18] = &T_TM01_11_TO_CN11_03;
test_fixtures[19] = &T_TM01_23_TO_CN11_05;
test_fixtures[20] = &T_TM01_12_TO_CN11_08;
test_fixtures[21] = &T_TM01_24_TO_CN11_01;

