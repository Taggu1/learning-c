#include <stdio.h>
#include <string.h>

#define SENTENCE_LENGTH 30
#define WORD_LEN 20

int main(void) {

    char sentance[SENTENCE_LENGTH][WORD_LEN];

    char termenatingChar;

    printf("Enter a sentance: ");

    char word[WORD_LEN];


    char ch;
    int count = 0, words_count = 0;


    while (1) {
        ch = getchar();
        if (ch == ' ') {
            sentance[words_count][count] = '\0';
            words_count++;
            count = 0;
            continue;
        }
        if (ch == '?' || ch == '.' || ch == '!') {
            sentance[words_count][count] = '\0';
            break;
        }
        sentance[words_count][count++] = ch;

    }




    printf("Reversal of sentance: ");

    termenatingChar = ch;

    for (int i = words_count; i >= 0; i--) {
        char *printf_string = i == 0 ? "%s" : "%s ";
        printf(printf_string, sentance[i]);
    }
    putchar(termenatingChar);

    printf("\n");


}