//
// Created by tbmc on 25/06/2017.
//

#include "debug.h"


void print_state(uint8_t *state, int Nb)
{
    printf("Print state:\n");
    int i, j;
    for(i = 0; i < NUMBER_ROWS; i++)
    {
        for(j = 0; j < Nb; j++)
        {
            uint8_t show = GET_MULTI_DIM(state, i, j, 4);
            // uint8_t show = get(state, i, j, 4); // state[i][j];
            printf("%2x ", show);
        }
        printf("\n");
    }
}

void print_states(uint8_t *states, int total_length, int max_per_line, bool transpose)
{
    int i, j, k, temp, idx;
    int bloc_number = total_length / STATE_LENGTH;

    printf("Print states:\n");
    for(i = 0; i < NUMBER_ROWS; i++)
    {
        for(j = 0; j < bloc_number; j++)
        {
            if((max_per_line > 0) && (j * NUMBER_ROWS + k + N_B >= max_per_line))
                break;
            for(k = 0; k < N_B; k++)
            {
                if(!transpose)
                    idx = (i * N_B) + (j * STATE_LENGTH) + k;
                else
                    idx = i + (j * STATE_LENGTH) + (k * N_B);
                temp = states[idx];
                printf("%2x ", temp);
            }
            if(j < bloc_number - 1)
                printf("| ");
        }
        printf("\n");
    }
}

bool is_states_equal(uint8_t *s1, uint8_t *s2, int Nb, bool show_dif)
{
    int i, j;
    uint8_t a, b;
    bool all_same = true;
    if(show_dif)
        printf("Show diff : ");
    for(i = 0; i < NUMBER_ROWS; i++)
    {
        for(j = 0; j < Nb; j++)
        {
            a = GET_MULTI_DIM(s1, i, j, Nb);
            // a = get(s1, i, j, Nb);
            b = GET_MULTI_DIM(s2, i, j, Nb);
            // b = get(s2, i, j, Nb);
            if(a == b)
            {
                if(show_dif)
                    printf("_");
            }
            else
            {
                if(!show_dif)
                    return false;
                all_same = false;
                printf("X");
            }
        }
        if(show_dif)
            printf("\n");
    }
    return all_same;
}

