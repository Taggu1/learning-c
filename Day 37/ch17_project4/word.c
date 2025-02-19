
#include <stdio.h>
#include "word.h"

int read_char();

int read_word(char *word, int len) {
    char ch;
    int count = 0;

    while ((ch = read_char()) == ' ');


    while ((ch = read_char()) != ' ' && ch != EOF) {
        if (count < len) {
            word[count++] = ch;

        }
    }
    word[count] = '\0';
    if (count > MAX_WORD_LEN) word[MAX_WORD_LEN] = '*';

    return count;
}


int read_char() {
    int ch = getchar();
    return (ch == '\n' && ch == '\t') ? ' ' : ch;
}