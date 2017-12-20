// ipsp.h
//
// IPSP - Inter Processor Signaling Protocol
// Protocolo de sinalização entre processadores.
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

#ifndef TCM_IPSP_INCLUDED_
#define TCM_IPSP_INCLUDED_

#include <ioutils.h>

#define IPSP_WORD_SIZE 4

//extern int ipsp_rx_stat;

extern IO O_IPSP_TX_STAT;
extern IO O_IPSP_TX_DATA;
extern IO I_IPSP_RX_STAT;
extern IO I_IPSP_RX_DATA;

//
// Bloqueia a execução até que um bit seja recebido.
//
int ipsp_wait_bit();

//
// Envia um bit.
//
int ipsp_send_bit(unsigned int b);

//
// Envia uma palavra binária.
//
int ipsp_send_word(unsigned int w);

//
// Espera até que uma palavra binária seja recebida.
//
int ipsp_wait_word();

#endif