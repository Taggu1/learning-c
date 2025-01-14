// Name: ch3_project5.c
// Purpose: Fifth project of chapter 3
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16;

    printf("Enter numbers from 1 to 16 in any order;\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &r1, &r2, &r3, &r4, &r5, &r6, &r7, &r8, &r9, &r10, &r11, &r12, &r13, &r14, &r15, &r16);

    printf("%2d %2d %2d %2d\n", r1, r2, r3, r4);
    printf("%2d %2d %2d %2d\n", r5, r6, r7, r8);
    printf("%2d %2d %2d %2d\n", r9, r10, r11, r12);
    printf("%2d %2d %2d %2d\n", r13, r14, r15, r16);

    int rowSum1, rowSum2, rowSum3, rowSum4;

    rowSum1 = r1 + r2 + r3 + r4;
    rowSum2 = r5 + r6 + r7 + r8;
    rowSum3 = r9 + r10 + r11 + r12;
    rowSum4 = r13 + r14 + r15 + r16;

    printf("Row sums: %d %d %d %d\n", rowSum1, rowSum2, rowSum3, rowSum4);

    int colSum1, colSum2, colSum3, colSum4;

    colSum1 = r1 + r5 + r9 + r13;
    colSum2 = r2 + r6 + r10 + r14;
    colSum3 = r3 + r7 + r11 + r15;
    colSum4 = r4 + r8 + r12 + r16;

    printf("Column sums: %d %d %d %d\n", colSum1, colSum2, colSum3, colSum4);

    int digSum1, digSum2;

    digSum1 = r1 + r6 + r11 + r16;
    digSum2 = r4 + r7 + r10 + r13;

    printf("Diognal sums: %d %d\n", digSum1, digSum2);
}