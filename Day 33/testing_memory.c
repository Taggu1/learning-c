

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {

    int char_count;

    printf("Enter number of charactesr for string\n");
    scanf("%d", &char_count);

    char *str = malloc(char_count + 1);

    printf("Enter string: ");
    scanf("%s", str);

    puts(str);
}


char *concat(const char *s1, const char *s2) {

    char *result = malloc(strlen(s1) + strlen(s2) +1);

    if (result == NULL) {
        printf("Error: malloc failed in concat\n");
        exit(EXIT_FAILURE);
    }
    strcpy(result,s1);
    strcat(result,s2);
    return result;

    int *a, *b, n =4;

    a = malloc(n * sizeof(int));

    b = calloc(n,sizeof(int));
    
} 