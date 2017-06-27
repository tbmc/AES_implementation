//
// Created by tbmc on 27/06/2017.
//

#include "test_key.h"


void test_print_states()
{
    uint8_t key[4][4] = {
        { 0x2b, 0x28, 0xab, 0x09 },
        { 0x7e, 0xae, 0xf7, 0xcf },
        { 0x15, 0xd2, 0x15, 0x4f },
        { 0x16, 0xa6, 0x88, 0x3c },
    };
    uint8_t sk[32], tk[16];
    matrix_transpose(tk, key, 4, 4);
    memcpy(sk, tk, 16);
    memcpy(sk + 16, tk, 16);

    print_states(sk, 32, -1, true);
}

void test_expand_key()
{
    /*
    uint8_t key[4][4] = {
        { 0x2b, 0x28, 0xab, 0x09 },
        { 0x7e, 0xae, 0xf7, 0xcf },
        { 0x15, 0xd2, 0x15, 0x4f },
        { 0x16, 0xa6, 0x88, 0x3c },
    };
     */
    uint8_t key[16] = {
        0x2b, 0x28, 0xab, 0x09,
        0x7e, 0xae, 0xf7, 0xcf,
        0x15, 0xd2, 0x15, 0x4f,
        0x16, 0xa6, 0x88, 0x3c,
    };
    uint8_t sk[16];
    // memcpy(sk, key, 16);
    matrix_transpose(sk, key, 4, 4);

    enum KeySize ks = SIZE_16;
    int Nr = GET_ROUND_NUMBER(ks);
    int expanded_key_size = key_get_expanded_key_size(Nr);

    uint8_t expanded_key[expanded_key_size];

    key_expand_key(expanded_key, sk, ks, expanded_key_size);

    print_states(sk, 16, -1, true);
    // print_state(sk, 4);

    printf("\n");

    print_states(expanded_key, expanded_key_size, 32, true);
}


