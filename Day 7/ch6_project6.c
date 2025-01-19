// Name: ch6_project6.c
// Purpose: Sixth project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i * i <= number; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i * i);
        }
    }

}