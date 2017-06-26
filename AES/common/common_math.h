//
// Created by tbmc on 25/06/2017.
//

#ifndef AES_MATRIX_MATH_H
#define AES_MATRIX_MATH_H


#include <stdlib.h>
#include <stdint.h>
#include <string.h>


void matrix_int_multiply_vector(uint8_t *matrix, uint8_t *vector, int n_row, int n_column, uint8_t *out);

uint8_t galois_multiplication(uint8_t a, uint8_t b);


#endif //AES_MATRIX_MATH_H
