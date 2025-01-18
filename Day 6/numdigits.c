// Name: numdigits.c
// Purpose: calculates yhe nimber of digit of a number
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int number, n = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &number);

    do {
        number /= 10;
        n++;
    } while (number != 0);

    printf("The number has %d digit(s)\n", n);

    return 0;
}