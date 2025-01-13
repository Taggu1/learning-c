// Name: dweight.c
// Purpose: Computes the dimensional weight o f a 12" x 10" x 8" box
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int height = 8, width = 12, length = 10, volume;

    volume = height * width * length;

    printf("Dimentions: %d %d %d \n", width, length, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}