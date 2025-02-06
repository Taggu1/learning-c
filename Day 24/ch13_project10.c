#include <stdio.h>
#include <string.h>

#define NAME_LEN 40

void reverse_name(char *name);
int read_line(char *str, int n);

int main(void) {
    char name[NAME_LEN];
    printf("Enter a first and last name: ");
    read_line(name, NAME_LEN);
    reverse_name(name);

}

void reverse_name(char *name) {
    char firstNameInitial = *name;
    char firstName[NAME_LEN];
    int count = 0;

    while (*name++ != ' ');

    printf("%s ,%c.\n", name, firstNameInitial);
}


int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF && i < n) {
        str[i++] = ch;
    }
    str[i] = '\0';

    return i;
}