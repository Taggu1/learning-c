// Name: c2_project5.c
// Purpose: asks the user to enter a U.S. dollar amount and then shows how to pay
// that amount using the smallest number of $20, $10, $5, and $1 bills:
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int amount, numOf20, numOf10, numOf5, numOf1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    numOf20 = amount / 20;

    amount = amount - 20 * numOf20;

    numOf10 = amount / 10;

    amount = amount - 10 * numOf10;

    numOf5 = amount / 5;

    amount = amount - 5 * numOf5;

    numOf1 = amount / 1;

    printf("$20 bills: %d\n", numOf20);
    printf("$10 bills: %d\n", numOf10);
    printf("$5 bills: %d\n", numOf5);
    printf("$1 bills: %d\n", numOf1);

    return 0;
}