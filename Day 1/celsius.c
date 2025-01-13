// Name: celsius.c
// Purpose: Converts from Fahrenheit to Celsius
// Author: Hisham Mohammed

#include <stdio.h>

#define FREEZING_POINT 32
#define SCALE_FACTOR (5 / 9)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit temprature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

    printf("Celsius equivalent: %0.2f\n", celsius);
}
