// Name: ch6_project5.c
// Purpose: Fifth project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);


    do {
        printf("%d", number % 10);
        number /= 10;
    } while (number != 0);

    printf("\n");
}