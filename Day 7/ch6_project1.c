// Name: ch6_project1.c
// Purpose: First project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {

    float largest = 0, currentNum;

    do {
        printf("Enter a number: ");
        scanf("%f", &currentNum);
        if (largest < currentNum) {
            largest = currentNum;
        }
    } while (currentNum > 0);

    printf("The largest number entered was %.2f\n", largest);

}