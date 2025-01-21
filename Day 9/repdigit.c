// Name: repdigit.c
// Purpose: Checking a Number for Repeated Digits
// Author: Hisham Mohammed

#include <stdbool.h>
#include <stdio.h>

#define N 10

int main(void) {
    int digitSeen[N] = { false };
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        int currentDigit = number % 10;
        if (digitSeen[currentDigit]) {
            printf("Repeated Digit\n");
            return 0;
        }
        else {
            digitSeen[currentDigit] = true;
        }

    } while (number != 0);


    printf("No repeated digit\n");
}