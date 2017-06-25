//
// Created by tbmc on 25/06/2017.
//

#include "key.h"


// Nk : Number of 32-bits words comprising the Cipher Key
void key_expansion(uint8_t *key, uint32_t *w, int Nb, int Nk, int Nr)
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


