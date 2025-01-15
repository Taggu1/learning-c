// Name: ch4_testing.c
// Purpose: Testing code of chapter 4
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 1;
    k = 1 + (i += 2);

    printf("%d %d %d \n", i, j, k);

    return 0;
}