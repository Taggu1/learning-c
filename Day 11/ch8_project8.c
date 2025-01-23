// Name: ch8_project8.c
// Purpose: Eigth project of chapter 8
// Author: Hisham Mohammed


#include <stdio.h>

#define N 5

int main(void) {
    int numbers[N][N];
    int rowTotals[N] = { 0 };
    int colTotals[N] = { 0 };

    int lowScores[N] = { 0 };
    int highScores[N] = { 0 };

    for (int row = 0; row < N; row++) {
        printf("Quiz %d grades: ", row + 1);
        for (int column = 0; column < N; column++) {
            scanf("%d", &numbers[row][column]);
        }
    }
    int lowest = 0;
    int highest = 0;

    for (int row = 0; row < N; row++) {
        lowest = numbers[row][0];
        highest = numbers[row][0];
        for (int column = 0; column < N; column++) {
            int currentGrade = numbers[row][column];
            rowTotals[row] += currentGrade;
            if (currentGrade < lowest) lowest = currentGrade;
            if (currentGrade > highest) highest = currentGrade;
        }
        lowScores[row] = lowest;
        highScores[row] = highest;

    }



    for (int column = 0; column < N; column++) {
        for (int row = 0; row < N; row++) {
            colTotals[column] += numbers[row][column];
        }

    }



    printf("Total student score: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", colTotals[i]);
    }

    printf("\n");

    printf("Average score: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", colTotals[i] / N);
    }

    printf("\n");


    printf("Average exam score: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", rowTotals[i] / N);
    }

    printf("\n");

    printf("High scores: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", highScores[i]);
    }

    printf("\n");


    printf("Low scores: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", lowScores[i]);
    }

    printf("\n");
}