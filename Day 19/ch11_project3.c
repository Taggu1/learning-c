

#include <stdio.h>

void reduce(int numerator,int denominator,int *reduced_numenator, int *reduced_denominator);

int main(void) {

    int nom, denom, reduced_nom, reduced_denom;

    printf("Enter a fraction: ");
    scanf("%d /%d", &nom, &denom);

    reduce(nom,denom,&reduced_nom,&reduced_denom);
    printf("In lowest terms: %d/%d\n", reduced_nom, reduced_denom);
}

void reduce(int numerator,int denominator,int *reduced_numenator, int *reduced_denominator) {
    int firstNumber = numerator;
    int secondNumber = denominator;
    while (secondNumber != 0) {
        int remainder = firstNumber % secondNumber;
        firstNumber = secondNumber;
        secondNumber = remainder;
    }
    *reduced_numenator = numerator / firstNumber;
    *reduced_denominator = denominator / firstNumber;

}