// Name: ch6_project11.c
// Purpose: Twelveth project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    float e, total = 1, currentFactorial = 0;

    printf("Enter ez: ");
    scanf("%f", &e);

    int i = 0;
    while (1) {
        for (int j = 0; j <= i;j++) {
            currentFactorial += j;
        }
        int term = 1 / currentFactorial;
        if (term < e) break;
        total += term;
        i++;
        currentFactorial = 0;
    }

    printf("e = %.2f\n", total);

}