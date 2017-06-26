//
// Created by tbmc on 25/06/2017.
//

#include "key.h"
#include "common/common_aes.h"


const uint32_t RCON_ARRAY[] = {
    0x01000000, 0x02000000, 0x04000000, 0x08000000,
    0x10000000, 0x20000000, 0x40000000, 0x80000000,
    0x1B000000, 0x36000000, 0x6C000000, 0xD8000000,
    0xAB000000, 0x4D000000, 0x9A000000,
};

enum KeySize {
    SIZE_16 = 16,
    SIZE_24 = 24,
    SIZE_32 = 32,
};


void rot_word(uint8_t *row)
{
    shift_row(row, 1);
}

void sub_word(uint8_t *row)
{
    int i;
    for(i = 0; i < NUMBER_ROWS; i++)
        row[i] = sub_byte(row[i]);
}

uint32_t rcon(int round, enum KeySize key_size)
{
    int r = (round / (key_size / 4)) - 1;
    return RCON_ARRAY[r];
}



// Nk : Number of 32-bits words comprising the Cipher Key
void key_expansion_old(uint8_t *key, uint32_t *w, int Nb, int Nk, int Nr)
{
    uint32_t temp;
    int i, l;

    for(i = 0; i < Nk; i++)
    {
        temp = ((uint32_t *) key)[i];
        w[i] = temp;
    }

    i = Nk;
    l = Nb * (Nr + 1);

    for(; i < l; i++)
    {
        temp = w[i - 1];
        if(i % Nk == 0)
        {

        }
    }
}


void key_expansion(uint8_t *key)
{

}





