


#include <stdio.h>
#include <ctype.h>

#define MESSAGE_LEN 100

int main(void) {
    char message[MESSAGE_LEN];


    printf("Enter a message: ");


    char ch;
    int count = 0;
    while ((ch = getchar()) != '\n' && count < MESSAGE_LEN) {
        if (isalpha(ch)) {
            message[count++] = ch;
        }
    }


    for (int i = 0; i < count; i++) {   
        if (tolower(message[i]) != tolower(message[count-i-1])) { 
            printf("Not a palindrome\n");
            return 0;
        }
    }

    for (char *p = message; p < message + count; p++)
    {
          if (tolower(*p) != tolower(*((message + count - 1) - (p - message)))) { 
            printf("Not a palindrome\n");
            return 0;
        }
    }
    
    
    printf("Palindrome\n");
    

    
}