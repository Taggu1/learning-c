

#include <stdio.h>

#define MESSAGE_LEN 100

int main(void) {

    char message[MESSAGE_LEN];

    printf("Enter a message: ");

    char ch;
    int count = 0;
    while ((ch = getchar()) != '\n' && count < MESSAGE_LEN) {
        message[count++] = ch;
    }
    
    printf("Reversal is: ");

    for (char *p = message + count; p >= message ;p--) {
        putchar(*p);
    }
    
    printf("\n");
}