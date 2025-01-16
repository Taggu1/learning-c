// Name: ch5_exercises.c
// Purpose: Chapter 5 exercises
// Author: Hisham Mohammed

#include <stdio.h>


int main(void) {
    int i = 2, j = 3, k;
    k = i * j == 6;

    printf("%d\n", k); // 0

    i = 5, j = 10, k = 1;
    printf("%d\n", k > i < j); // 1

    i = 3, j = 2, k = 1;
    printf("%d\n", i < j == j < k); // 1

    i = 3, j = 4, k = 5;
    printf("%d\n", i % j + i < k); // 1

}