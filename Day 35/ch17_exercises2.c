
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// 2
char *duplicate(char *str);

int main(void) {

    // 2
    char *s1 = "This is nice";
    char *s2 = duplicate(s1);
    puts(s2);
}


// 3
int *create_array(int n, int initial_value) {
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        /* code */
    }

}


// 2
char *duplicate(char *str) {
    char *buffer = malloc(strlen(str));

    if (buffer == NULL) {
        return NULL;
    }

    strcpy(buffer, str);

    return buffer;
}


// 1
void *my_malloc(size_t _size) {
    void *mem = malloc(_size);

    if (mem == NULL) {
        puts("Error malloc couldn't allocate memory");
        exit(EXIT_FAILURE);
    }

    return mem;
}

