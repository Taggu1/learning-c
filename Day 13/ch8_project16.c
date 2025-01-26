// Name: ch8_project16.c
// Purpose: Sixteen project of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

#define ARR_LEN 26

int main(void) {
    int lettersCount[ARR_LEN] = { 0 };

    printf("Enter first word: ");

    char ch;

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);

            lettersCount[ch - 'a'] += 1;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);

            lettersCount[ch - 'a'] -= 1;
        }
    }

    for (int i = 0; i < ARR_LEN; i++) {
        if (lettersCount[i] != 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }

    }

    printf("The words are anagrams.\n");


    return 0;
}
