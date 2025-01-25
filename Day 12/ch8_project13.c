// Name: ch8_project13.c
// Purpose: Thirtenn project of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>

#define NAME_LENGTH 24

int main(void) {
    char firstNameInitial;

    char nameArray[NAME_LENGTH];
    int count = 0;

    printf("Enter a first and last name: ");
    scanf(" %c", &firstNameInitial);

    char ch;
    while ((ch = getchar()) == ' ');

    while ((ch = getchar()) != ' ');
    while ((ch = getchar()) == ' ');

    nameArray[count++] = ch;

    while ((ch = getchar()) != '\n' && count < NAME_LENGTH - 3) {
        if (ch != ' ')
            nameArray[count++] = ch;

    }

    nameArray[count++] = ',';
    nameArray[count++] = ' ';
    nameArray[count++] = firstNameInitial;
    nameArray[count++] = '.';

    printf("You entered the name: ");

    for (int i = 0; i < count; i++) {
        putchar(nameArray[i]);
    }

    printf("\n");



}