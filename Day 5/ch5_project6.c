// Name: ch5_project6.c
// Purpose: Sixth project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

    printf("Enter the UPC code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int firstSum, secondSum;

    firstSum = d1 + d3 + d5 + d7 + d9 + d11;
    secondSum = d2 + d4 + d6 + d8 + d10;

    int total = ((firstSum * 3) + secondSum) - 1;
    int check_digit = 9 - (total % 10);

    if (check_digit == d12) {
        printf("VALID\n");
    }
    else {
        printf("NOT VALID\n");
    }

}