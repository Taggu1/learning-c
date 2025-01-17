
// Name: ch5_project1.c
// Purpose: First project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int number, digitsCount;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
        digitsCount = 1;
    }
    else if (number >= 10 && number <= 99) {
        digitsCount = 2;
    }
    else if (number >= 100 && number <= 999) {
        digitsCount = 3;
    }
    else {
        digitsCount = 4;
    }

    printf("The number %d has %d digit/s\n", number, digitsCount);

}