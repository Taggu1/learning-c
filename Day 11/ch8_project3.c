// Name: ch8_project3.c
// Purpose: Third project of chapter 8
// Author: Hisham Mohammed

#include <stdbool.h>
#include <stdio.h>

#define N 10

int main(void) {
    int digitSeen[N] = { false };
    int number;




    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number <= 0) return 0;
        do {
            int currentDigit = number % 10;
            if (digitSeen[currentDigit]) {
                printf("Repeated Digit\n");
                goto skipLoop;
            }
            else {
                digitSeen[currentDigit] = true;
            }
            number /= 10;
        } while (number != 0);


        printf("No repeated digit\n");
    skipLoop:;
        for (int i = 0; i < N; i++) {
            digitSeen[i] = false;
        }

    }


}