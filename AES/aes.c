//
// Created by tbmc on 25/06/2017.
//

#include "aes.h"

/*
 * First round : Just add round key
 * Last round : without mix column
 */

void aes()
{

}

/*
void to_state_array(uint8_t *cipher_text, int nb, uint8_t **out)
{
    // uint8_t temp_array[4][nb];
    int r, c; // r: row and c: column
    for(c = 0; c < nb; c++)
    {
        for(r = 0; r < NUMBER_ROWS; r++)
            out[r][c] = cipher_text[r + (4 * c)];
    }

}

void state_to_string(uint8_t **state, int nb, uint8_t *out) {
    int r, c;
    for(c = 0; c < nb; c++) {
        for(r = 0; r < NUMBER_ROWS; r++)
            out[r + (4 * c)] = state[r][c];
    }
}
*/










