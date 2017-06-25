//
// Created by tbmc on 25/06/2017.
//

#include "util.h"

MultiDimArray calloc_multi_dim_array(size_t rows, size_t columns) {
    MultiDimArray out = malloc(sizeof(struct structMultiDimArray));
    if(out == NULL)
        return NULL;

}

void free_multi_dim_array(MultiDimArray array) {

}

