// Name: ch8_project6.c
// Purpose: Sixth project of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

#define MESSAGE_MAX_LEN 100

int main(void) {
    char message[MESSAGE_MAX_LEN];

    printf("Enter message: ");

    char ch;
    int counter = 0;
    while ((ch = getchar()) != '\n' && counter < MESSAGE_MAX_LEN) {
        message[counter] = ch;
        counter++;
    }

    printf("In B1FF speak: ");

    for (int i = 0; i < counter; i++) {
        char currentChar = toupper(message[i]);

        switch (currentChar) {
        case 'A': putchar('4'); break;
        case 'B': putchar('8'); break;
        case 'E': putchar('3'); break;
        case 'I': putchar('1'); break;
        case 'O': putchar('0'); break;
        case 'S': putchar('5'); break;
        default: putchar(currentChar); break;
        }
    }

    printf("!!!!!!!!\n");
}