// Name: maxmin.c
// Purpose: Finds the largest and smallest elements in an array
// Author: Hisham Mohammed

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
    int numbers[N];

    printf("Enter %d numbers: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int largest, smallest;

    max_min(numbers, N, &largest, &smallest);

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);



}

void max_min(int a[], int n, int *max, int *min) {
    int tempMax = a[0], tempMin = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > tempMax) tempMax = a[i];
        if (a[i] < tempMin) tempMin = a[i];
    }

    *max = tempMax;
    *min = tempMin;

}