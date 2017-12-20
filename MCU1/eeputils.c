// eeputils.c
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

//
// Rotinas de leitura e escrita adaptadas de 
// http://www.avrfreaks.net/comment/469897#comment-469897
//

#include <eeputils.h>
#include <mega64.h>

unsigned char read_eeprom_byte(unsigned char eep_address)
{
    char data = 0;
    
    while (EECR & 0x02 == 1) ;          // Verifica se o o bit EEWE BIT está zerado
   
    EEARH = 0x00;                       // Seta o byte MSB BYTE do endereço
    EEARL = eep_address;                // Seta o byte LSB BYTE do endereço
    EECR = 0x01;                        // Seta o bit EERE
    
    #asm
        nop;
        nop;
    #endasm
   
    data = EEDR;                        // Lê da EEPROM
    
    return data;
}

//void write_eeprom_byte(char eep_address, char data)
//{
//    while (EECR & 0x02 == 1) ;          // CHECK EEWE BIT
//    while (SPMCR & 0x01 == 1);          // CHECK SPMEN BIT
//   
//    EEARH=0x00;                         // SET ADDRESS MSB BYTE
//    EEARL = eep_address ;               // SET LSB BYTE OF ADDRESS
//    EEDR = data ;                       // WRITE data to be written to EEPROM    
//    EECR = 0x04 ;                       // SET EEMWE BIT
//    #asm
//        nop;
//        nop;
//    #endasm
//    EECR = 0x06;                        // SET EEMWE & EEWE BITS
//    while(EECR & 0x04 == 1);            // CHECK EEMWE IS CLRED
//}