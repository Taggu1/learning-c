
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ARR_LEN 26
#define WORD_LEN 30

bool are_anagrams(const char *word, const char *word2);

int main(void) {
    char first_word[WORD_LEN], second_word[WORD_LEN];

    printf("Enter first word: ");
    scanf("%s", first_word);


    printf("Enter second word: ");
    scanf("%s", second_word);


    if (are_anagrams(first_word, second_word)) {
        printf("The words are anagrams.\n");

    } else {
        printf("The words are not anagrams.\n");

    }

    return 0;
}


bool are_anagrams(const char *word, const char *word2) {
    int lettersCount[ARR_LEN] = { 0 };

    while (*word) {
        if (isalpha(*word)) {
            lettersCount[tolower(*word) - 'a'] += 1;
        }
        word++;
    }

    while (*word2) {
        if (isalpha(*word2)) {
            lettersCount[tolower(*word2) - 'a'] -= 1;
        }
        word2++;
    }

    for (int i = 0; i < ARR_LEN; i++) {
        if (lettersCount[i] != 0) {
            return false;
        }

    }

    return true;

}