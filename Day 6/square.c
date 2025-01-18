// Name: square.c
// Purpose: T h i s program p r i n t s a table of s q u a r e s .
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int n, i = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("\t\t%2d\t\t%2d\n", i, i * i);
        i++;
    }


}