// Name: reverse2.c
// Purpose: Reverses a series of numbers using a variable-length
// a r r a y - C99 only
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int i, n;

    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");


}