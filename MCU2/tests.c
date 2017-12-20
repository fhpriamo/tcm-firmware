// tests.c
//
// Rotinas de teste.
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

#include <tests.h>
#include <errors.h>
#include <eeputils.h>
#include <signature.h>
#include <conectors.h>
#include <ioutils.h>
#include <delay.h>
#include <stdlib.h>

static int num_tests;
static TestFixture* tests; 

LoadingError load_tests()
{
    int i = 0;
    int eepaddr = 0; // Endere�o inicial da mem�ria EEPROM.
	int conector_index;
	
    // Move o ponteiro da mem�ria EEPROM para o registro da assinatura.
    eepaddr = EEP_HEADER_SIGNATURE;
    
    // L� e compara assintura
    if (SIGNATURE != read_eeprom_byte(eepaddr))
    {
        return LOADING_ERR_SIGNATURE_MISMATCH;
    }
    
    // Move o ponteiro da mem�ria EEPROM para o registro de n�mero de testes.
    eepaddr = EEP_HEADER_NUM_TESTS;
	
    // L� n�mero de testes
	num_tests = read_eeprom_byte(eepaddr);
    
    // Se n�o h� testes, retorna status positivo.
    if (num_tests == 0)
    {
        return LOADING_OK;
    }

    // Aloca mem�ria para os testes
	tests = (TestFixture*) calloc(num_tests, sizeof(TestFixture));
    
    // Verifica se a aloca��o foi bem sucedida
	if (!tests)
	{
		return LOADING_ERR_MEMORY_ALLOCATION_UNSUCCESSFUL;
	}
    
    // Move o ponteiro da memoria EEPROM para a posi��o anterior ao bloco de dados.
    eepaddr = EEP_DATA_BLOCK_BEGIN - 1;
    
	for (i = 0; i < num_tests; i++)
	{
        // L� o indice do conector de sa�da.
		conector_index = read_eeprom_byte(++eepaddr);

        // Verifica se o �ndice do conector est� dentro do n�mero de conectores definidos.
		if (conector_index >= NUM_CONECTORS)
		{
			return LOADING_ERR_INDEX_OUT_OF_BOUNDS_OUTPUT;
		}

        // Atribui o conector de sa�da � sa�da do teste.
		(tests + i)->output = conectors[conector_index];
  
        // L� o indice do conector de sa�da.
		conector_index = read_eeprom_byte(++eepaddr);

        // Verifica se o �ndice do conector est� dentro do n�mero de conectores definidos.
		if (conector_index >= NUM_CONECTORS)
		{
			return LOADING_ERR_INDEX_OUT_OF_BOUNDS_INPUT;
		}
        
        // Atribui o conector de entrada � entrada do teste.
		(tests + i)->input = conectors[conector_index];
	}
    
    return LOADING_OK;
}

int test(struct test_fixture *c)
{
    int i;
    int failed = 0;
    
    // P�e a sa�da em estado alto. 
    high(*c->output);
    
    // Espera TIME_ON_HIGH milisegundos.                      
    delay_ms(TIME_ON_HIGH);

    // Verifica se a entrada est� em estado baixo. Nesse caso,
    // registra a falha no teste.
    if (is_low(*c->input))
    {
        for(i = 0; i < errors_size; i++)
        {
            if (errors[i].output == c->output)
            {
               errors[i].failed = failed = 1;
            }
        }
    }

    // Volta a sa�da para o estado baixo. 
    low(*c->output);
    
    // Retorna o status do teste.
    return failed;                                                                                
}

int run_tests()
{
    int i;
    int has_failures = 0;
    
    for (i = 0; i < num_tests; i++)
    {
        if (test(tests + i))
        {
            has_failures = 1;
        }
        
        delay_ms(TIME_BETWEEN_TESTS);
    }
    
    return has_failures;
}

int has_error()
{
    int i;

    for (i = 0; i < errors_size; i++)
    {
        if (errors[i].failed)
        {
            return 1;
        }
    }
    
    return 0;
}

void show_errors()
{
    int i ;
    
    for (i = 0; i < errors_size; i++)
    {
        if (errors[i].failed)
        {
            low(*errors[i].output);
        }
        else
        {
            high(*errors[i].output);
        }
    }
}

