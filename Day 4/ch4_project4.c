
// Name: ch4_project4.c
// Purpose: Rewrite number in octal
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int number, digit1, digit2, digit3, digit4, digit5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    digit5 = number % 8;
    number /= 8;
    digit4 = number % 8;
    number /= 8;

    digit3 = number % 8;
    number /= 8;

    digit2 = number % 8;
    number /= 8;

    digit1 = number % 8;

    printf("In octal, your number is: %.1d%.1d%.1d%.1d%.1d\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}