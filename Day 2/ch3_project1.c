// Name: day2_project1.c
// Purpose: First project of chapter 3
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("%.4d%.2d%.2d\n", year, month, day);

    return 0;
}