// Name: sum.c
// Purpose: Sums numbers
// Author: Hisham Mohammed

#include <stdio.h>
#define ESC '\33'

int main(void) {
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    long int n, total;
    scanf("%d", &n);
    while (n != 0) {
        total += n;
        scanf("%ld", &n);
    }


    printf("The sum is: %ld\n '\33'", total);

}