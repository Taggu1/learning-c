
#include <stdio.h>
#include <ctype.h>

#define SENTENCE_LEN 60


int compute_vowel_count(const char *sentence);

int main(void) {

    char sentence[SENTENCE_LEN];
    printf("Enter a sentence: ");
    scanf("%s", sentence);

    printf("Your sentence contains %d vowels\n", compute_vowel_count(sentence));
}

int compute_vowel_count(const char *sentence) {
    int vowels_count = 0;

    while (*sentence) {
        switch (tolower(*sentence)) {
            case 'a': case 'e': case 'i': case 'o': case 'u': vowels_count += 1; break;
        }
        sentence++;
    }

    return vowels_count;
}