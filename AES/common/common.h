//
// Created by tbmc on 25/06/2017.
//

#ifndef AES_COMMON_H
#define AES_COMMON_H


#include <stdlib.h>
#include <stdint.h>
#include <string.h>


/*
 * For multi dimensional arrays
 */
#define INDEX_MULTI_DIM(i_row, i_column, column_number) ((i_row * column_number) + i_column)
#define GET_MULTI_DIM(state, i_row, i_column, column_number) (state[INDEX_MULTI_DIM(i_row, i_column, column_number)])
#define SET_MULTI_DIM(state, i_row, i_column, column_number, value) \
    (state[INDEX_MULTI_DIM(i_row, i_column, column_number)] = (value))


// uint8_t get(uint8_t *multi_dim_array, int row_index, int column_index, int column_number);
// void set(uint8_t *multi_dim_array, int row_index, int column_index, int column_number, uint8_t value_to_set);





#endif //AES_COMMON_H
