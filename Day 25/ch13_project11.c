#include <stdio.h>

double compute_average_word_length(const char *sentence);

#define SENTENCE_LEN 100

int main(void) {
    char sentence[SENTENCE_LEN];


    printf("Enter a sentence: ");
    scanf("%s", sentence);



    printf("Average word length: %.1f\n", compute_average_word_length(sentence));

}

double compute_average_word_length(const char *sentence) {
    int wordCount = 0, letterCount = 0;
    float averageLength = 0;

    while (*sentence) {
        if (*sentence == ' ') wordCount++;
        if (*sentence != ' ') letterCount++;
        sentence++;
    }
    wordCount++;

    return averageLength = letterCount / (float)wordCount;
}