// Name: reverse.c
// Purpose: Reversing a Series of Numbers
// Author: Hisham Mohammed

#include <stdio.h>

#define N 10

int main(int argc, char *argv[]) {

    for (int i = argc - 1; i >= 1; i--) {
        printf("%s ", argv[i]);
    }

    printf("\n");


}