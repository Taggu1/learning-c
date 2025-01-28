// Name: ch9_project2.c
// Purpose: second project of chapter 9
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {

}



#include <stdio.h>

int main(void) {
    float  income, tax;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    printf("Your taxes are: %.2f\n", income_tax(tax));

}

float income_tax(float income) {
    double tax;
    if (income < 750) {
        tax = income * (1 / 100);
    }
    else if (income < 2250) {
        tax = 7.50 + income * (2 / 100);
    }
    else if (income < 3750) {
        tax = 37.50 + income * (3 / 100);
    }
    else if (income < 5250) {
        tax = 82.50 + income * (4 / 100);
    }
    else if (income < 7000) {
        tax = 142.50 + income * (5 / 100);
    }
    else {
        tax = 230.00 + income * (6 / 100);
    }

    return tax;
}