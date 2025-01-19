// Name: ch6_project3.c
// Purpose: Third project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {

    int nom, denom, firstNumber, secondNumber;

    printf("Enter a fraction: ");
    scanf("%d /%d", &nom, &denom);

    firstNumber = nom;
    secondNumber = denom;
    while (secondNumber != 0) {
        int remainder = firstNumber % secondNumber;
        firstNumber = secondNumber;
        secondNumber = remainder;
    }

    printf("In lowest terms: %d/%d\n", nom / firstNumber, denom / firstNumber);
}