// Name: ch8_project4.c
// Purpose: Forth project of chapter 8
// Author: Hisham Mohammed


#include <stdio.h>

#define N 10
#define ARRAY_LENGTH (int) (sizeof(a) /  sizeof(a[0]))

int main(void) {
    int a[N];

    printf("Enter %d numbers: ", ARRAY_LENGTH);
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");

    for (int i = ARRAY_LENGTH - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");


}