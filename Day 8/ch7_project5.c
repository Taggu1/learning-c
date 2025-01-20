// Name: ch7_project5.c
// Purpose: Fifth project of chapter 7
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int scrabbleValue = 0;

    printf("Enter a word: ");

    char ch;
    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
        case 'A': case 'E': case 'I': case 'L':
        case 'N': case 'O': case 'R': case 'S':
        case 'T': case 'U':  scrabbleValue += 1; break;
        case 'D': case 'G': scrabbleValue += 2; break;
        case 'B': case 'C': case 'M': case 'P': scrabbleValue += 3; break;
        case 'F': case 'H': case 'V': case 'W': case 'Y': scrabbleValue += 4; break;
        case 'K': scrabbleValue += 5; break;
        case 'X': case 'J':  scrabbleValue += 8; break;
        case 'Q': case 'Z':  scrabbleValue += 10; break;
        default: break;
        }
    }

    printf("Scrabble value: %d\n", scrabbleValue);


}