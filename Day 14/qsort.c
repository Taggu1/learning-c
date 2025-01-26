// Name: qsort.c
// Purpose: Qicksort 
// Author: Hisham Mohammed

#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

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

void quicksort(int a[], int low, int high) {
    int middle;

    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);

}

int split(int a[], int low, int high) {
    int part_element = a[low];

    while (1) {
        while (low < high && a[high] >= part_element) {
            high--;
        }
        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && a[low] <= part_element) {
            low++;
        }
        if (low >= high) break;
        a[high--] = a[low];


    }
    a[high] = part_element;
    return high;

}