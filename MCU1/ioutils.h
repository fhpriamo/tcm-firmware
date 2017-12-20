// ioutils.h
//
// Utilidades para manipular as portas de IO.
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

#ifndef TCM_IOUTILS_INCLUDED_
#define TCM_IOUTILS_INCLUDED_

//
// Registradores de controle de IO
//
#define _PORTA (unsigned char*) 0x3B
#define _PORTB (unsigned char*) 0x38
#define _PORTC (unsigned char*) 0x35
#define _PORTD (unsigned char*) 0x32
#define _PORTE (unsigned char*) 0x23
#define _PORTF (unsigned char*) 0x62
#define _PORTG (unsigned char*) 0x65

#define _PINA (unsigned char*) 0x39
#define _PINB (unsigned char*) 0x36
#define _PINC (unsigned char*) 0x33
#define _PIND (unsigned char*) 0x30
#define _PINE (unsigned char*) 0x21
#define _PINF (unsigned char*) 0x20
#define _PING (unsigned char*) 0x63

//
// Estados da porta
//
#define HIGH 1
#define LOW  0

//
// Endereço para uma porta de IO
//
typedef unsigned char *Port;

//
// Enumeração dos bits de um registrador.
//
//typedef enum { BIT0=0, BIT1=1, BIT2=2, BIT3=3, BIT4=4, BIT5=5, BIT6=6, BIT7=7 } Bit;
typedef int Bit;

#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5
#define BIT6 6
#define BIT7 7

//
// Tipo IO. É o conjunto de uma porta e um bit que permiterm manipular o estado de um pino.
// 
typedef struct io_struct
{
    Bit  pbit;   // Port bit (BIT0, BIT1, etc...)
    Port port;  // Port     (_PORTA, _PORTB, etc...)
} IO;

//
// Põe um pino em estado alto.
//
#define high(x)     ( *(x).port |= (1 << (x).pbit) )

//
// Põe um pino em estado baixo.
//
#define low(x)      ( *(x).port &= ~(1 << (x).pbit) )

//
// Verifica se um pino está em estado alto.
//
#define is_high(x)  ( (*(x).port & (1 << (x).pbit)) != 0 )

//
// Verifica se um pino está em estado baixo.
//
#define is_low(x)   ( (*(x).port & (1 << (x).pbit)) == 0 )

//
// Comuta o estado de uma porta.
//
#define toggle(x) (is_low(x) ? high(x) : low(x))

//
// Põe o estado da porta x em y (0 ou 1).
//
#define set(x,y) (y == 0? low(x) : high(x))

//
// Obtem o estado da porta (0 ou 1).
//
#define get(x) (is_high(x))

//
// Verifica se a porta x está no estado y.
//
#define is(x,y) (y == 0? is_low(x) : is_high(x))

#endif
