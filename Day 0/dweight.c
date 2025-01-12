// Name: dweight.c
// Purpose: Computes the dimensional weight o f a 12" x 10" x 8" box
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int height = 8, width = 12, length = 10, volume, weight;

    volume = height * width * length;
    weight = (volume + 165) / 166;

    printf("Dimentions: %d %d %d \n", width, length, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    //  Wherever a value is needed, any expression of the same type will do.
    int n1, n2 = 5;
    int n1_mul_n2 = n1 * n2;

    printf("n1*n2: %d \n", n1_mul_n2);
    // Same as
    printf("n1*n2: %d \n", n1 * n2);

    return 0;
}