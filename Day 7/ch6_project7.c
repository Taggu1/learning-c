// Name: ch6_project7.c
// Purpose: Seventh project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int n, odd = 3, square = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i <= n;i++) {
        printf("\t\t%2d\t\t%2d\n", i, square);
        square += odd;
        odd += 2;

    }

    return 0;
}