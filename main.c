#include <stdio.h>

#include "tests/test_common.h"

int main()
{

    // test_sub_bytes();
    test_shift_rows();
    printf("\n\n");
    test_mix_columns();


    return 0;
}