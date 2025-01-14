// Name: day2_ex.c
// Purpose: Exercises of day 2
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    printf("%6d,%4d\n", 86, 1040);   //     86 - 1040 ✔️
    printf("%12.5e\n", 30.253);      // IDK
    printf("%.4f\n", 83.162);        // 83.1620 ✔️
    printf("%-6.2g\n", .0000009979); // IDK

    // -----------------------

    float floatNum = 83.162;

    printf("A: %-8.1e\n", floatNum);
    printf("B: %10.6e\n", floatNum);
    printf("C: %-8.3f\n", floatNum);
    printf("D: %6.0f\n", floatNum);
}