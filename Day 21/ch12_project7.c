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
    *max = a[0], *min = a[0];

    for (int *p = a; p < a +n ; p++) {
        if (*p > *max) *max = *p;
        if (*p < *min) *min = *p;
    }


}