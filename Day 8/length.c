// Name: length.c
// Purpose: Length of a message
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    printf("Enter a message: ");

    char ch;
    int counter = 0;

    while ((ch = getchar()) != '\n') {
        counter++;
    }

    printf("Your message was %d character(s) long\n", counter);
    return 0;
}