// Name: dweight2.c
// Purpose: Computes the dimensional weight of a box from input p r o v i d e d by the user
// Author: Hisham Mohammed

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height, weight, length, volume, width;

    printf("Enter width of the box: ");
    scanf("%d", &width);

    printf("Enter height of the box: ");
    scanf("%d", &height);

    printf("Enter length of the box: ");
    scanf("%d", &length);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimentions: %d %d %d \n", width, length, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
}