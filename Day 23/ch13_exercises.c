


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define STR_LEN 80

int read_line(char *str, int n);
void capitalize(char str[]);
void capitalizeP(char str[]);
void censor(char *str);
void censor2(char *str);
int my_strcmp(char *s, char *t);
void get_extension(const char *file_name, char *extension);
void build_index_url(const char *domain, char *index_url);
bool test_extension(const char *file_name, const char *extension);

int main(int argc, char *argv[]) {
    // 1
    // printf("%c", '\n'); // Wotks
    // printf("%c", "\n"); // Doesn't 
    // printf("%s", '\n'); // Doesn't 
    // printf("%s", "\n"); // Works
    // //printf('\n'); // Doesn't 
    // printf("\n"); // Works


    // 2
    char *p = "abc";
    // putchar(p); // Illegal
    putchar(*p); // a
    puts(p); // abc 
    // puts(*p); // Illegal

    // 3
    int j, i;
    char str[STR_LEN];

    // scanf("%d%s%d", &i, str, &j);
    // printf("%d-%s-%d", i, str, j);


    // 4
    // read_line(str, 3);
    // puts(str);

    // 5
    // read_line(str, STR_LEN);
    // capitalizeP(str);
    // puts(str);

    // 6
    // read_line(str, STR_LEN);
    // censor2(str);
    // puts(str);

    // 8
    // strcpy(str, "tire-bouchon"); // tire-bouchon
    // strcpy(&str[4], "d-or-wi"); // tired-or-wi 
    // strcat(str, "red?"); // tired-or-wired?
    // puts(str);

    char s1[STR_LEN], s2[STR_LEN];

    strcpy(s1, "computer");
    strcpy(s2, "science");

    if (strcmp(s1, s2) < 0) {
        strcat(s1, s2);
    } else {
        strcat(s2, s1);
    }
    s1[strlen(s1) - 6] = '\0'; // computers

    puts(s1);

    // 12
    char ext[STR_LEN];
    printf("%d\n", my_strcmp("Noice", "Noice"));
    get_extension("file.mp4", ext);
    puts(ext);

    // 13
    char index_url[STR_LEN];
    build_index_url("google.com", index_url);
    puts(index_url);

    // 14
    char s[] = "Hsjodi", *v;

    for (v = s; *v; v++) {
        --*v;
    }
    puts(s);




    // 17
    test_extension("file.mp4", "mp4");

    return 0;

}

// 4
int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF && i < n) {
        str[i++] = ch;
    }
    str[i] = '\0';

    return i;
}

// 5
void capitalize(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

}

// 5
void capitalizeP(char str[]) {
    while (*str++) {
        *str = toupper(*str);
    }
}

// 6
void censor(char *str) {
    for (int i = 0; str[i + 2] != '\0'; i++) {
        if (str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o') {
            str[i++] = 'x';
            str[i++] = 'x';
            str[i] = 'x';
        }
    }
}

void censor2(char *str) {


    do {
        if (*str == 'f' && *(str + 1) == 'o' && *(str + 2) == 'o') {
            *str++ = 'x';
            *str++ = 'x';
            *str = 'x';
        }
    } while (*str++);



}


// 11
int my_strcmp(char *s, char *t) {
    for (; *s == *t; s++, t++) {
        if (*s) return 0;
    }
    return *s - *t;
}

// 12
void get_extension(const char *file_name, char *extension) {
    int len_before_dot = 0;
    while (file_name[len_before_dot++] != '.');
    strcpy(extension, &file_name[len_before_dot]);
}

// 13
void build_index_url(const char *domain, char *index_url) {
    strcpy(index_url, "https://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

// 16
int count_spaces(const char str[]) {
    int count = 0;

    while (*str++) {
        if (*str == ' ') count++;
    }

    return count;
}

// 17
bool test_extension(const char *file_name, const char *extension) {
    int count = 0;
    puts("WHAT");
    while (*file_name++ != '.') {
        printf("%d\n", *file_name);
    }

    return 0;
}