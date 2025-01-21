// Name: ch7_project13.c
// Purpose: Thirtenn project of chapter 7
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int wordCount = 0, letterCount = 0;
    float averageLength = 0;

    printf("Enter a sentence: ");

    char ch;
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') wordCount++;
        if (ch != ' ') letterCount++;
    }
    wordCount++;

    averageLength = letterCount / (float)wordCount;


    printf("Average word length: %.1f\n", averageLength);

}