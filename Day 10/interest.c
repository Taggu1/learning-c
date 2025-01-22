// Name: interest.c
// Purpose: Prints a table of compound interest
// Author: Hisham Mohammed

#include <stdio.h>

#define NUM_RATES ((int) ( sizeof(value) / sizeof(value[0])))
#define INITAL_BALANCE 100.00

int main(void) {
    int i, lowRate, numYears, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &lowRate);
    printf("Enter number of year: ");
    scanf("%d", &numYears);

    printf("\nYears");

    for (int i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", lowRate + i);
        value[i] = INITAL_BALANCE;
    }

    printf("\n");

    for (int i = 1; i <= numYears; i++) {
        printf("%3d     ", i);
        for (int j = 0; j < NUM_RATES; i++) {
            value[j] += ((lowRate + j) / 100.0 * value[j]);
            printf("%7.2f", i, value[j]);
        }
        printf("\n");

    }


}
