// Name: ch6_project2.c
// Purpose: second project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int firstNum, secondNum;

    printf("Enter two integers: ");
    scanf("%d %d", &firstNum, &secondNum);


    while (secondNum != 0) {
        int remainder = firstNum % secondNum;
        firstNum = secondNum;
        secondNum = remainder;
    }

    printf("Greates common divisor: %d\n", firstNum);

}