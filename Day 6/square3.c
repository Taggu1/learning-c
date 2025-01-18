// Name: square3.c
// Purpose: P r i n t s a table of squares using an odd method 
// Author: Hisham Mohammed


#include <stdio.h>

int main(void) {
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1, odd = 3, square = 1;i <= n;odd += 2) {
        printf("\t\t%2d\t\t%2d\n", i, square);
        square += odd;
        i++;

    }

    return 0;
}