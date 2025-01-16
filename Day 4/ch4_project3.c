// Name: ch4_project3.c
// Purpose: Rewrite of project 2 without using arthimetics
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int digit1, digit2, digit3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);
}