

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
    for (int *p = sentance + count; p >= sentance; p--) {
        if (*p == ' ') {
            for (int j = 1; j <= innerCount; j++) {
                putchar(*(p+j));
            }
            putchar(' ');
            innerCount = 0;
        }
        else if (*p == 0) {
            for (int j = 0; j <= innerCount; j++) {
                putchar(*(p+j));
            }
        }
        else {
            innerCount++;
        }
    }

    putchar(termenatingChar);

    printf("\n");


}