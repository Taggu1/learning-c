
// Name: taxing.c
// Purpose: Add tax value to money
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    float amount, resault;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    resault = amount + amount * (5.0 / 100);

    printf("With tax added: %0.2f\n", resault);
}