// Name: ch7_project14.c
// Purpose: Fourteen project of chapter 7
// Author: Hisham Mohammed

#include <stdio.h>
#include <math.h>

int main(void) {
    double x, average, y = 1, newY = 100;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while (fabs(y - newY) > 0.0001 * y) {
        average = (y + (x / y)) / 2.0;

        y = newY;
        newY = average;

    }

    printf("Square root: %lf\n", y);
}