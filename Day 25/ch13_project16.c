
#include <stdio.h>
#include <string.h>

#define MESSAGE_LEN 100


int read_line(char *str, int n);
void reverse(char *message);

int main(void) {

    char message[MESSAGE_LEN];

    printf("Enter a message: ");
    read_line(message, MESSAGE_LEN);

    reverse(message);
    printf("Reversal is: %s", message);



    printf("\n");
}

void reverse(char *message) {
    char *p1 = message, *p2 = message + strlen(message) - 1;

    while (*p1 != *p2) {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++, p2--;
    }

}


int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF && i < n) {
        str[i++] = ch;
    }
    str[i] = '\0';

    return i;
}