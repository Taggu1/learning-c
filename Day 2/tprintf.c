// Name: tprintf.c
// Purpose: illustrates the use of printf to print integers and float-
// ing-point numbers in various formats.
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 830.21f;

    printf("|%d|%5d|%-5d|%5.3d\n", i, i, i, i);
    printf("|%10.3f|%10.2e|%-10g|\n", x, x, x);

    return 0;
}