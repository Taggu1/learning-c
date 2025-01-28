// Name: ch9_project4.c
// Purpose: Forth project of chapter 9
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ARR_LEN 26

bool equal_array(int counts1[ARR_LEN], int counts2[ARR_LEN]);
void read_word(int counts[ARR_LEN]);

int main(void) {
    int lettersCount[ARR_LEN] = { 0 };
    int counts1[ARR_LEN] = { 0 }, counts2[ARR_LEN] = { 0 };

    printf("Enter first word: ");
    read_word(counts1);

    printf("Enter second word: ");
    read_word(counts2);


    printf(equal_array(counts1, counts2) ? "The words are anagrams.\n" : "The words are not anagrams.");


    return 0;
}

void read_word(int counts[ARR_LEN]) {

    char ch;

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            counts[ch - 'a'] += 1;
        }
    }
}

bool equal_array(int counts1[ARR_LEN], int counts2[ARR_LEN]) {
    for (int i = 0; i < ARR_LEN; i++) {
        if (counts1[i] != counts2[i]) return false;
    }

    return true;
}