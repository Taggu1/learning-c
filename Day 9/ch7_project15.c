// Name: ch7_project15.c
// Purpose: fifteen project of chapter 7
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    float num, resault = 1;

    printf("Enter a positive integer: ");
    scanf("%f", &num);

    for (float i = 1; i <= num; i++) {
        resault *= i;
    }


    printf("Factorial of %f: %f\n", num, resault);
}