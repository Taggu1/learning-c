// Name: qsort.c
// Purpose: Qicksort 
// Author: Hisham Mohammed

#include <stdio.h>
#include "quick_sort.h"

#define N 10


int maib(void) {
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[N]);
    }

    quicksort(a, 0, N - 1);

    printf("Sorted Numbers: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");



}

