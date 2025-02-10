
#include "readline.h"

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
