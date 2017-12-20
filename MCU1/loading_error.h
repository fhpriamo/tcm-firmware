// loading_error.h
//
// Erros de carregamento.
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

#ifndef TCM_LOADING_ERROR_INCLUDED_
#define TCM_LOADING_ERROR_INCLUDED_

// 
// Valores para LoadingError
//
#define LOADING_OK                                  0
#define LOADING_ERR_SIGNATURE_MISMATCH              1
#define LOADING_ERR_MEMORY_ALLOCATION_UNSUCCESSFUL  2
#define LOADING_ERR_INDEX_OUT_OF_BOUNDS_OUTPUT      3
#define LOADING_ERR_INDEX_OUT_OF_BOUNDS_INPUT       4

//
// Valores para identificação de hardware (MCU)
//
#define HARDWARE_MCU1 1
#define HARDWARE_MCU2 2

//
// Código de erro de carregamento.
//
typedef int LoadingError;

//
// Identificação de hardware (MCU)
//
typedef int Hardware;

//
// Exibe erro de carregamento.
//
void show_loading_error(LoadingError err, Hardware h);

#endif
