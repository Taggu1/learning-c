
#include <stdio.h>
#include <ctype.h>

#include "utils.h"

#define MAX_DIGITS 100

int power(int num, int pow);


int read_int() {
    int number = 0;
    int digits[MAX_DIGITS];
    int count = 0;
    int current_pow = 0;

    char ch;

    while ((ch = (char)getchar()) != '\n' && count != MAX_DIGITS) {
        if (isdigit(ch)) {
            digits[count++] = ch - '0';
        }
    }


    // Ignore the rest of the line
    if (count == MAX_DIGITS) while (getchar() != '\n');

    for (int i = count - 1; i >= 0; i--) {
        number += digits[i] * power(10, current_pow++);

    }


    return number;
}

void read_string(char *str, int n) {
    char ch;
    int count = 0;


    while ((ch = (char)getchar()) != '\n' && count != n) {
        str[count++] = ch;
    }

    // Ignore the rest of the line
    if (count == n) while (getchar() != '\n');
    str[count] = '\0';
}


int power(int num, int pow) {
    int final_num = 1;
    for (int i = 0; i < pow; i++) {
        final_num *= num;
    }
    return final_num;
}