#include <stdio.h>
#include <string.h>

#define MESSAGE_LENGTH 80

int read_line(char *str, int n);

void encrypt(char *message, int shift);

int main(void) {
    char message[MESSAGE_LENGTH];
    int shift_amount;

    printf("Enter message to be encrypted: ");
    read_line(message, MESSAGE_LENGTH);


    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");
    encrypt(message, shift_amount);



    return 0;
}

void encrypt(char *message, int shift) {

    for (int i = 0; i < strlen(message); i++) {
        char currentChar = message[i];
        if (currentChar >= 'a' && currentChar < 'z') {
            putchar(((currentChar - 'a') + shift) % 26 + 'a');
        } else if (currentChar >= 'A' && currentChar < 'Z') {
            putchar(((currentChar - 'A') + shift) % 26 + 'A');
        } else {
            putchar(currentChar);
        }
    }
    printf("\n");

}



int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF && i < n) {
        str[i++] = ch;
    }
    str[i] = '\0';

    return i;
}