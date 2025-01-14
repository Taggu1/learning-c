// Name: addfrac.c
// Purpose: Adds two fractions
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, fraction1, fraction2;

    printf("Enter first fraction (nom/denom): ");
    scanf("%d /%d", &num1, &denom1);

    printf("Enter second fraction (nom/denom): ");
    scanf("%d /%d", &num2, &denom2);

    int resault_num = num1 * denom2 + num2 * denom1;
    int resault_denom = denom1 * denom2;

    printf("Resault: %d/%d\n", resault_num, resault_denom);

    return 0;
}