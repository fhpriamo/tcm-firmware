// conectors.h
//
// Agrupamento de conectores.
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

#ifndef TCM_CONECTORS_INCLUDED_
#define TCM_CONECTORS_INCLUDED_ 

#include <ioutils.h>

//#define NUM_CONECTORS 20

extern flash int NUM_CONECTORS;

extern IO* conectors[NUM_CONECTORS];

#endif
