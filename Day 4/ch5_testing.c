// Name: ch5_testing.c
// Purpose: Testing some stuff in ch5
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int i, k, j;


    i = 1;
    j = 2;
    k = i > j ? i : j; // 2
    k = (i >= 0 ? i : 0) + j; // 3
    \
        return 0;
}