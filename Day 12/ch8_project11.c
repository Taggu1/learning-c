// Name: ch8_project11..c
// Purpose: Eleventh project chapter 8
// Author: Hisham Mohammed



#include <stdio.h>

#define PHONE_NUM_LEN 15

int main(void) {

    printf("Enter phone number: ");


    char phoneNumber[PHONE_NUM_LEN];

    char ch;



    int count = 0;
    while ((ch = getchar()) != '\n' && count < PHONE_NUM_LEN) {
        switch (ch) {
        case 'A': case 'B': case 'C': phoneNumber[count] = '2';  break;
        case 'D': case 'E': case 'F':  phoneNumber[count] = '3';  break;
        case 'G': case 'H': case 'I':  phoneNumber[count] = '4';  break;
        case 'J': case 'K': case 'L':  phoneNumber[count] = '5';  break;
        case 'M': case 'N': case 'O':  phoneNumber[count] = '6'; break;
        case 'P': case 'R': case 'S':   phoneNumber[count] = '7'; break;
        case 'T': case 'U': case 'V':  phoneNumber[count] = '8'; break;
        case 'W': case 'X': case 'Y':  phoneNumber[count] = '9'; break;
        default: phoneNumber[count] = ch;  break;
        }
        count++;
    }

    printf("In numeric form: ");

    for (int i = 0; i < PHONE_NUM_LEN; i++) {
        putchar(phoneNumber[i]);
    }

    printf("\n");

}
