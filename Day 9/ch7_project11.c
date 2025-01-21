// Name: ch7_project11.c
// Purpose: Eleventh project of chapter 7
// Author: Hisham Mohammed


#include <stdio.h>

int main(void) {
    char firstNameInitial;

    printf("Enter a first and last name: ");
    scanf(" %c", &firstNameInitial);

    char ch;
    while ((ch = getchar()) == ' ');

    while ((ch = getchar()) != ' ');
    while ((ch = getchar()) == ' ');

    putchar(ch);

    while ((ch = getchar()) != '\n') {
        if (ch != ' ')
            putchar(ch);
    }

    printf(", %c.\n", firstNameInitial);


}