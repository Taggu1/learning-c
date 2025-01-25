// Name: ch8_project14.c
// Purpose: Fourteen project of chapter 12
// Author: Hisham Mohammed

#include <stdio.h>

#define SENTENCE_LENGTH 200

int main(void) {

    char sentance[SENTENCE_LENGTH];

    char termenatingChar;

    printf("Enter a sentance: ");

    char ch;
    int count = 0;


    while (1) {
        ch = getchar();
        if (ch == '?' || ch == '.' || ch == '!') {
            break;
        }
        sentance[count++] = ch;

    }



    printf("Reversal of sentance: ");

    termenatingChar = ch;
    int innerCount = 0;
    for (int i = count; i >= 0; i--) {
        if (sentance[i] == ' ') {
            for (int j = 1; j <= innerCount; j++) {
                putchar(sentance[i + j]);
            }
            putchar(' ');
            innerCount = 0;
        }
        else if (i == 0) {
            for (int j = 0; j <= innerCount; j++) {
                putchar(sentance[i + j]);
            }
        }
        else {
            innerCount++;
        }
    }

    putchar(termenatingChar);

    printf("\n");


}