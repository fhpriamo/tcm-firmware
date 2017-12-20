// eeputils.h
//
// Utilidades para manipular a mem�ria EEPROM.
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

#ifndef TCM_EEPUTILS_INCLUDED_
#define TCM_EEPUTILS_INCLUDED_

//
// L� um byte (char) da mem�ria eeprom no endere�o eep_address
//
unsigned char read_eeprom_byte(unsigned char eep_address);

//
// Escreve um byte (char) no endere�o eep_address da mem�ria eeprom
//
//void write_eeprom_byte(char eep_address, char data);

#endif
