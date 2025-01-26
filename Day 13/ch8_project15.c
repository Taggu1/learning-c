// Name: ch8_project15.c
// Purpose: Fifteen project of chapter 8
// Author: Hisham Mohammed


#include <stdio.h>

#define MESSAGE_LENGTH 80

int main(void) {
    char message[MESSAGE_LENGTH];
    int count = 0, shiftAmount;

    printf("Enter message to be encrypted: ");

    char ch;
    while ((ch = getchar()) != '\n' && count < MESSAGE_LENGTH) {
        message[count++] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmount);

    printf("Encrypted message: ");

    for (int i = 0; i <= count; i++) {
        char currentChar = message[i];
        if (currentChar >= 'a' && currentChar < 'z') {
            putchar(((currentChar - 'a') + shiftAmount) % 26 + 'a');
        }
        else if (currentChar >= 'A' && currentChar < 'Z') {
            putchar(((currentChar - 'A') + shiftAmount) % 26 + 'A');
        }
        else {
            putchar(currentChar);
        }
    }

    printf("\n");

    return 0;
}