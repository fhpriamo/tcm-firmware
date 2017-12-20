// ipsp.c
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


#include <ipsp.h>
#include <ioutils.h>

static int ipsp_rx_stat = 0;

static void int_to_bin_array(unsigned int data, char* buf, int count)
{
    unsigned int mask = 1;
    int i, j;

    for (i = 0, j = count-1; i < count; i++, j--)
    {
        mask = 1 << i;
        buf[j] = (data & mask) ? 1 : 0;
    }
}

static int array_bin_to_int(char* arr, int count)
{
    unsigned int data = 0;
    unsigned int mask;
    int i, j;

    for (i = 0, j = count - 1; i < count; i++, j--)
    {
        mask = arr[i] == 0 ? 0 : 1 << j; 
        data = data | mask;
    }

    return data;
}

int ipsp_wait_bit()
{
    while (is(I_IPSP_RX_STAT, ipsp_rx_stat)) {}
    ipsp_rx_stat = get(I_IPSP_RX_STAT);
    return get(I_IPSP_RX_DATA);
}

int ipsp_send_bit(unsigned int b)
{
    set(O_IPSP_TX_DATA, b);
    toggle(O_IPSP_TX_STAT);
    return get(O_IPSP_TX_STAT);
}

int ipsp_send_word(unsigned int w)
{
    char buf[IPSP_WORD_SIZE];
    int i = 0;
    
    int_to_bin_array(w, buf, IPSP_WORD_SIZE);

    for (i = 0; i < IPSP_WORD_SIZE; i++)
    {
        ipsp_send_bit(buf[i]);
        ipsp_wait_bit();
    }
    
    return 0;
}

int ipsp_wait_word()
{
    char buf[IPSP_WORD_SIZE];
    int i = 0;

    for (i = 0; i < IPSP_WORD_SIZE; i++)
    {
        buf[i] = ipsp_wait_bit();
        ipsp_send_bit(buf[i]);
    }

    return array_bin_to_int(buf, IPSP_WORD_SIZE);
}
