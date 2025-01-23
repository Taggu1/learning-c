// Name: ch8_project7.c
// Purpose: Seventh project of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>

#define N 5

int main(void) {
    int numbers[N][N];
    int rowTotals[N] = { 0 };
    int colTotals[N] = { 0 };


    for (int row = 0; row < N; row++) {
        printf("Enter row %d: ", row + 1);
        for (int column = 0; column < N; column++) {
            scanf("%d", &numbers[row][column]);
        }
    }

    for (int row = 0; row < N; row++) {
        for (int column = 0; column < N; column++) {
            rowTotals[row] += numbers[row][column];
        }

    }

    for (int column = 0; column < N; column++) {
        for (int row = 0; row < N; row++) {
            colTotals[column] += numbers[row][column];
        }

    }

    printf("Row totals: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", rowTotals[i]);
    }

    printf("\n");

    printf("Column totals: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", colTotals[i]);
    }

    printf("\n");



}