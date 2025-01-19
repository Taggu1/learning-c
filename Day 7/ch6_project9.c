// Name: ch6_project9.c
// Purpose: Ninth project of chapter 6
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
    scanf("%d", &paymentCount);

    balance = loan;

    for (int i = 1; i <= paymentCount; i++) {
        balance = balance - payment + balance * ((intrest_rate / 100.0f) / 12.0f);
        printf("Balance remaning after %d payment: %0.2f\n", i, balance);
    }

}