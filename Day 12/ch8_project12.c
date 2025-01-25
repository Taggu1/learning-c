// Name: ch8_project12.c
// Purpose: Twelveth project of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int scrabbleValue = 0;

    int scrabbleValues[26] = {
        1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10
    };

    printf("Enter a word: ");

    char ch;
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            scrabbleValue += scrabbleValues[ch - 'a'];
        }
    }

    printf("Scrabble value: %d\n", scrabbleValue);


}