
// Name: cs.c
// Purpose: Testing conversion specifications
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    float num = 100.4444;
    int intNum = 100;

    printf("First Test: %5d\n", num);
    printf("First Test: %5f\n", num);

    printf("Int test %.4d\n", intNum);

    printf("Second Test: %e\n", num);
    printf("Second Test: %g\n", num);
}