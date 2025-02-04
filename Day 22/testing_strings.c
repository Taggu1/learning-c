

#include <string.h>
#include <stdio.h>

#define STR_LEN 100

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++) {
        puts(argv[i]);
    }


    char str1[STR_LEN], str2[STR_LEN];

    strcpy(str1, "THIS IS STRING ONE");
    strncpy(str1, str2, sizeof(str1) - 1);
    str1[sizeof(str1) - 1] = '\0';

    puts(str2);

    int len;

    len = strlen("ABC");
    len = strlen(" ");
    len = strlen("THIS IS A LOT");

    strcpy(str1, "abc");
    strcat(str1, "def");

    puts(str1);

    strcpy(str1, "abc");
    strcpy(str2, "def");
    strcat(str1, str2);

    puts(str1);

    if (strcmp(str1, str2) < 0);


    char *planets[] = { "Mercury", "Venus","Earth",
                          "Mars","Jupiter","Saturn",
                          "Uranus","Neptune","Pluto" };

    for (int i = 0; i < 9; i++) {
        if (planets[i][0] == 'M') {
            printf("Planet %s stars with an M\n", planets[i]);
        }
    }

}

size_t my_strlen(char *s) {
    int n = 0;
    while (*s++) n++;
    return n;
}

char *strcat1(char *s1, char *s2) {
    int i;
    for (i = 0; *s2; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0';


    return s1;
}

char *strcat3(char *s1, char *s2) {
    char *p = s1;

    while (*p) p++;
    while (*p++ = *s2++);

    return s1;

}