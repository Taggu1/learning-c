#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_LEN 20

int max_length = 10;


int compare_strings(const void *s1, const void *s2);
int read_line(char str[], int n);

int main(void) {
    char *strings[max_length];


    char buffer[MAX_BUFFER_LEN];

    int word_count = 0;
    do {
        printf("Enter word: ");
        read_line(buffer, MAX_BUFFER_LEN);
        strings[word_count] = malloc(strlen(buffer) + 1);

        strcpy(strings[word_count], buffer);


        word_count++;

    } while (strlen(buffer) != 1 && word_count != max_length);
    word_count--;

    qsort(strings, word_count, sizeof(*strings), compare_strings);

    printf("In sorted order: ");
    for (int i = 0; i < word_count; i++) {
        printf("%s ", strings[i]);
    }
    printf("\n");
}

int compare_strings(const void *s1, const void *s2) {
    return -strcmp((char *) s1, (char *) s2);
}



int read_line(char str[], int n) {
    char ch;
    int count = 0;
    while ((ch = getchar()) != '\n') {
        if (count < n) {
            str[count++] = ch;
        }
    }
    str[count] = '\0';
    return count;
}
