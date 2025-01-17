// Name: ch5_project10.c
// Purpose: tenth project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int numericalGrade, firstDigit;

    printf("Enter numerical grade: ");
    scanf("%d", &numericalGrade);

    firstDigit = numericalGrade / 10;

    printf("Letter grade: ");

    switch (firstDigit) {
    case 9: case 10: printf("A\n"); break;
    case 8: printf("B\n"); break;
    case 7: printf("C\n"); break;
    case 6: printf("D\n"); break;
    case 5: case 4: case 3: case 2: case 1: case 0: printf("F\n"); break;
    default:
        printf("\nError: You enterd an invalid grade\n");
        break;
    }
}