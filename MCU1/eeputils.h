// eeputils.h
//
// Utilidades para manipular a memória EEPROM.
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

#ifndef TCM_EEPUTILS_INCLUDED_
#define TCM_EEPUTILS_INCLUDED_

//
// Lê um byte (char) da memória eeprom no endereço eep_address
//
unsigned char read_eeprom_byte(unsigned char eep_address);

//
// Escreve um byte (char) no endereço eep_address da memória eeprom
//
//void write_eeprom_byte(char eep_address, char data);

#endif
