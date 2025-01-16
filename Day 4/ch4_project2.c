// Name: ch4_project4.c
// Purpose: Reverse 3 digit number
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a three-digit number: ");
    scanf("%3d", &number);

    int firstDigit, secondDigit, thirdDigit;

    firstDigit = number / 100;
    secondDigit = (number % 100) / 10;
    thirdDigit = number % 10;

    printf("The reversal is: %d%d%d\n", thirdDigit, secondDigit, firstDigit);
}