// Name: c2_project2.c
// Purpose: Chapter 2 Project 2
// Author: Hisham Mohammed

#include <stdio.h>

#define PI 3.14

int main(void)
{
    float r;

    printf("Enter radius of sphere: ");
    scanf("%f", &r);

    float volume = (4.0 / 3.0) * PI * r * r * r;

    printf("Volume: %0.2f\n", volume);
}