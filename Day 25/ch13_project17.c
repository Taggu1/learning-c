
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MESSAGE_LEN 100

int read_line(char *str, int n);

bool is_palindrome(const char *message);

int main(void) {
    char message[MESSAGE_LEN];


    printf("Enter a message: ");
    read_line(message, MESSAGE_LEN);

    if (is_palindrome(message)) {
        printf("Palindrome\n");


    } else {
        printf("Not a palindrome\n");

    }



    return 0;



}

bool is_palindrome(const char *message) {
    const char *first = message;
    while (*message) {
        if (tolower(*message) != tolower(*((message + strlen(message) - 1) - (message - first)))) {
            return false;
        }
        message++;
    }

    return true;
}

int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF && i < n) {
        str[i++] = ch;
    }
    str[i] = '\0';

    return i;
}