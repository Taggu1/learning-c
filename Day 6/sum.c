// Name: sum.c
// Purpose: Sums numbers
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    int n, total;
    scanf("%d", &n);
    while (n != 0) {
        total += n;
        scanf("%d", &n);
    }

    printf("The sum is: %d\n", total);

}