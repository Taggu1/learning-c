// Name: ch7_project10.c
// Purpose: Tenth project of chapter 7
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int vowelsCount = 0;

    printf("Enter a sentence: ");

    char ch;

    while ((ch = getchar()) != '\n') {
        switch (tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u': vowelsCount += 1; break;
        }
    }

    printf("Your sentence contains %d vowels\n", vowelsCount);


}