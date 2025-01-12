// Name: variables.c
// Purpose: Playing with c variables
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int height, length, width, volume;
    float profit, bonus;

    height = 4;
    length = 10;
    width = 23;
    volume = height * length * width;

    profit = 23.44f;

    printf("Height: %d \n", height);

    // use .p to force print f to only print p digits after the dot
    printf("Profit: %.2f \n", profit);

    printf("Height: %d Length: %d\n", height, length);

    return 0;
}