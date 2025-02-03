

#include <stdio.h>

#define STR_LEN 80

int read_line(char str[],int n);

int main(void) {
   char *p;

   p = "abc";

   char ch;

   ch = "abc"[3];


   char date[] = "June 14";

   char str[] = "Are you having fun yet";

   puts(str);


   char sentence[STR_LEN+1];

   puts("Enter a sentence");
   fgets(sentence,STR_LEN,stdin);

   puts(sentence);
}

int read_line(char str[],int n) {
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

int count_spaces(const char str[]) {
    int count = 0;

    while (*str != '\0') {
        if (*str == ' ') count++;
        str++;
    }
    
    return count;
}