

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define WORD_LEN 20

int main(void) {
    char smallest_word[WORD_LEN], longest_word[WORD_LEN];

    char current_word[WORD_LEN];
    bool first_time = true;
    do {
        printf("Enter word: ");
        scanf("%s", &current_word);

        if (first_time) {
            strcpy(smallest_word, current_word);
            strcpy(longest_word, current_word);
            first_time = false;
        }

        if (strcmp(current_word, smallest_word) < 0) {
            strcpy(smallest_word, current_word);
        }

        if (strcmp(current_word, longest_word) > 0) {
            strcpy(longest_word, current_word);
        }


    } while (strlen(current_word) != 4);


    printf("Smallest word: %s\n", smallest_word);
    printf("Longest word: %s\n", longest_word);

    return 0;

}