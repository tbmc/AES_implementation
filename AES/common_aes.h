//
// Created by tbmc on 25/06/2017.
//

#ifndef AES_AES_H
#define AES_AES_H

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>


#define NUMBER_ROWS (4)
#define N_B         (4)
#define STATE_LENGTH (16)

#define NUMBER_ROUND_128 (10)
#define NUMBER_ROUND_192 (12)
#define NUMBER_ROUND_256 (14)


const uint8_t S_BOX[16][16];
const uint8_t MIX_MATRIX[4][4];


uint8_t sub_byte(uint8_t input);
void sub_bytes(uint8_t *state);

void shift_row(uint8_t *row, int nbr_to_shift);
void shift_rows(uint8_t *state);

void mix_column(uint8_t *column);
void mix_columns(uint8_t *state);

void add_round_key(uint8_t *state, uint8_t *round_key);

void aes_round(uint8_t *state, uint8_t round_key, bool last_round);


#endif //AES_AES_H
