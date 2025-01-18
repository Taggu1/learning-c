// Name: squares2.c
// Purpose: Prints a t a b l e of squares using a for statementt
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        printf("\t\t%2d\t\t%2d\n", i, i * i);

    }


}