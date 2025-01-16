// Name: ch4_project6.c
// Purpose: Rewrite of upc to ean
// Author: Hisham Mohammed

#include <stdio.h>
int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int firstSum, secondSum;

    firstSum = d1 + d3 + d5 + d7 + d9 + d11;
    secondSum = d2 + d4 + d6 + d8 + d10 + d12;

    int total = ((firstSum * 3) + secondSum) - 1;
    int check_digit = 9 - (total % 10);

    printf("Check digit: %d\n", check_digit);
}