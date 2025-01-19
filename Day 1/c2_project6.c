// Name: c2_project6.c
// Purpose: calculates the remaining balance on a loan after the first, second, and third monthly payments
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    float loan, intrest_rate, payment, balance;
    int paymentCount = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter intrest rate: ");
    scanf("%f", &intrest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter payment count: ");
    scanf("%d", paymentCount);

    balance = loan;

    balance = balance - payment + balance * ((intrest_rate / 100.0f) / 12.0f);
    printf("Balance remaning after first payment: %0.2f\n", balance);

    balance = balance - payment + balance * ((intrest_rate / 100.0f) / 12.0f);
    printf("Balance remaning after second payment: %0.2f\n", balance);

    balance = balance - payment + balance * ((intrest_rate / 100.0f) / 12.0f);
    printf("Balance remaning after third payment: %0.2f\n", balance);
}