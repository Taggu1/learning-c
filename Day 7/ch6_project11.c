// Name: ch6_project11.c
// Purpose: Eleventh project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    float n, total = 1, currentFactorial = 0;

    printf("Enter n: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i;j++) {
            currentFactorial += j;
        }
        total += 1 / currentFactorial;
        currentFactorial = 0;
    }

    printf("e = %.2f\n", total);

}