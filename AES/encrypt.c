//
// Created by tbmc on 27/06/2017.
//

#include "encrypt.h"


void aes_main(uint8_t *state, uint8_t *expanded_key, int nbr_rounds)
{
    int i;
    uint8_t round_key[STATE_LENGTH];

    for(i = 0; i < nbr_rounds; i++)
    {
        aes_round(state, round_key, i == nbr_rounds - 1);
    }
}


