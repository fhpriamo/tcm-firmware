// errors.h
//
// Erros.
//
// Vers�o: 1.0.0
//
// Autores:
//   * 17/05/2017 - F�bio H. Priamo <priamo74@gmail.com>
//   *
//
// TCM - Testador de Cabos Microcontrolado
// Copyright: Lupa Tecnologia e Sistemas LTDA 2017.
//

#ifndef TCM_ERRORS_INCLUDED_
#define TCM_ERRORS_INCLUDED_

#include <ioutils.h>

//
// Associa��o de uma sa�da a um erro.
//
typedef struct s_error
{
    IO* output;
    char failed;
} Error;

extern const int errors_size;

extern Error errors[];


#endif
