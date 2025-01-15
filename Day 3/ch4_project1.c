// Name: ch4_project1.c
// Purpose: Reverse number
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a two-digit number: ");
    scanf("%2d", &number);

    int firstDigit, secondDigit;

    firstDigit = number % 10;
    secondDigit = number / 10;

    printf("The reversal is: %d%d\n", firstDigit, secondDigit);
}