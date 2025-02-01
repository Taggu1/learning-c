

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens,int *fives, int *ones);

int main(void)
{
    int amount, numOf20, numOf10, numOf5, numOf1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    pay_amount(amount,&numOf20,&numOf10,&numOf5,&numOf1);
   
    printf("$20 bills: %d\n", numOf20);
    printf("$10 bills: %d\n", numOf10);
    printf("$5 bills: %d\n", numOf5);
    printf("$1 bills: %d\n", numOf1);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,int *fives, int *ones) {
    *twenties = dollars / 20;

    dollars = dollars - 20 * *twenties;

    *tens = dollars / 10;

    dollars = dollars - 10 * *tens;

    *fives = dollars / 5;

    dollars = dollars - 5 * *fives;

    *ones = dollars / 1;

}