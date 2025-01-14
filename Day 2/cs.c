
// Name: cs.c
// Purpose: Testing conversion specifications
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    float num = 100;

    // Test
    printf("First Test: %5d\n", num);
    printf("First Test: %5f\n", num);

    printf("Second Test: %f\n", num);
    printf("Second Test: %5f\n", num);
}