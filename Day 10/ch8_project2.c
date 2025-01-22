// Name: ch8_project2.c
// Purpose: Second project of chapter 8
// Author: Hisham Mohammed

#include <stdbool.h>
#include <stdio.h>

#define N 10

int main(void) {
    int repeatedCount[N] = { 0 };
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        int currentDigit = number % 10;
        repeatedCount[currentDigit] += 1;
        number /= 10;
    } while (number != 0);


    printf("Digit:      ");

    for (int i = 0; i < N; i++) {
        printf("%3d", i);
    }
    printf("\nOccurences: ");
    for (int i = 0; i < N; i++) {
        printf("%3d", repeatedCount[i]);
    }

    printf("\n");
    return 0;

}