//
// Created by tbmc on 25/06/2017.
//

#include "test_common.h"

#include "../AES/debug.h"
#include "../AES/common_aes.h"


void test_sub_bytes()
{
    uint8_t in_array[4][4] = {
            { 0x19, 0xa0, 0x9a, 0xe9 },
            { 0x3d, 0xf4, 0xc6, 0xf8 },
            { 0xe3, 0xe2, 0x8d, 0x48 },
            { 0xbe, 0x2b, 0x2a, 0x08 },
    };
    uint8_t expected[4][4] = {
            { 0xd4, 0xe0, 0xb8, 0x1e },
            { 0x27, 0xbf, 0xb4, 0x41 },
            { 0x11, 0x98, 0x5d, 0x52 },
            { 0xae, 0xf1, 0xe5, 0x30 },
    };
    uint8_t *in = (uint8_t *) in_array;
    print_state(in, 4);
    sub_bytes(in);
    print_state(in, 4);

}

void test_shift_rows()
{
    uint8_t in_array[4][4] = {
            { 0xd4, 0xe0, 0xb8, 0x1e },
            { 0x27, 0xbf, 0xb4, 0x41 },
            { 0x11, 0x98, 0x5d, 0x52 },
            { 0xae, 0xf1, 0xe5, 0x30 },
    };
    uint8_t *in = (uint8_t*) in_array;
    print_state(in, 4);
    shift_rows(in);
    print_state(in, 4);
}

void test_mix_columns()
{
    uint8_t in_array[4][4] = {
            { 0xd4, 0xe0, 0xb8, 0x1e, },
            { 0xbf, 0xb4, 0x41, 0x27, },
            { 0x5d, 0x52, 0x11, 0x98, },
            { 0x30, 0xae, 0xf1, 0xe5, },
    };
    uint8_t *in = (uint8_t*) in_array;
    print_state(in, 4);
    mix_columns(in);
    print_state(in, 4);
}











