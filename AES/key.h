//
// Created by tbmc on 25/06/2017.
//

#ifndef AES_KEY_H
#define AES_KEY_H

#include <stdlib.h>
#include <stdint.h>


#define GET_ROUND_NUMBER(__key_size) (__key_size == SIZE_16 ? NR_10 : (__key_size == SIZE_24 ? NR_12 : NR_14))

enum KeySize {
    SIZE_16 = 16,
    SIZE_24 = 24,
    SIZE_32 = 32,
};
enum RoundNumber {
    NR_10 = 10,
    NR_12 = 12,
    NR_14 = 14,
};

int key_get_expanded_key_size(int Nr);

void key_expand_key(uint8_t *expanded_key, uint8_t *key, enum KeySize key_size, int expanded_key_size);


#endif //AES_KEY_H
