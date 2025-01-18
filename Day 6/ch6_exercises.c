// Name: ch6_exercises.c
// Purpose: Exercises of chapter six
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    /// 1
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    // 1 2 4 8 16 32 64 128
    printf("\n");

    /// 2
    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);
    // 9384 938 93 9
    printf("\n");

    // /// 3
    // for (int i = 5, j = i - 1; i > 0, j > 0;--i, j = i - 1)
    //     printf("%d ", i);
    // 5 4 3 2
    printf("\n");


    /// 6
    for (int i = 1; i <= 128; i *= 2)
        printf("%d ", i);
    printf("\n");

    /// 7
    i = 9384;
    printf("%d ", i);
    i /= 10;
    for (;i > 0;i /= 10)     printf("%d ", i);
    printf("\n");

    /// 8
    // for (int i = 10; i >= 1; i /= 2) {
    //     printf("%d ", i++);
    // }
    printf("\n");

    // /// 9
    // i = 10;
    // while (i >= 1) {
    //     printf("%d ", i++);
    //     i /= 2;
    // }

    // 11
    int sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2) // Is odd
            continue;
        sum += i;
    }
    printf("%d\n", sum);
    // 30
    printf("\n");

    /// 12
    int m = 0, n;
    for (n = 0;m > 0;n++) {
        m /= 2;
    }
    printf("%d %d\n", m, n);
    // rewrite
    m = 0;
    for (n = 0;m > 0;n++, m /= 2);
    printf("%d %d\n", m, n);

    printf("\n");


}