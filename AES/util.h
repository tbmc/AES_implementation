//
// Created by tbmc on 25/06/2017.
//

#ifndef AES_UTIL_H
#define AES_UTIL_H

#include <stdlib.h>
#include <stdint.h>

struct structMultiDimArray
{

    size_t rows, columns;
    uint8_t **array;

};
typedef struct structMultiDimArray * MultiDimArray;

#endif //AES_UTIL_H
