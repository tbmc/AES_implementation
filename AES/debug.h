//
// Created by tbmc on 25/06/2017.
//

#ifndef AES_DEBUG_H
#define AES_DEBUG_H


#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#include "common.h"
#include "common_aes.h"


void print_state(uint8_t *state, int Nb);

bool is_states_equal(uint8_t *s1, uint8_t *s2, int Nb, bool show_dif);

void print_states(uint8_t *states, int total_length, int max_per_line, bool transpose_block);


#endif //AES_DEBUG_H
