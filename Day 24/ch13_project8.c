
#include <stdio.h>
#include <ctype.h>

#define WORD_LEN 20

int compute_scrabble_value(const char *word);

int main(void) {
    char scrabble_word[WORD_LEN];

    printf("Enter a word: ");
    scanf("%s", scrabble_word);

    printf("Scrabble value: %d\n", compute_scrabble_value(scrabble_word));


}


int compute_scrabble_value(const char *word) {
    int scrabble_value = 0;

    while (*word) {
        switch (toupper(*word)) {
            case 'A': case 'E': case 'I': case 'L':
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':  scrabble_value += 1; break;
            case 'D': case 'G': scrabble_value += 2; break;
            case 'B': case 'C': case 'M': case 'P': scrabble_value += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y': scrabble_value += 4; break;
            case 'K': scrabble_value += 5; break;
            case 'X': case 'J':  scrabble_value += 8; break;
            case 'Q': case 'Z':  scrabble_value += 10; break;
            default: break;
        }
        word++;
    }

    return scrabble_value;
}