#include <stdio.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(void) {
    int a[N];

    printf("Enter %d numbers to be sorted: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, a, a + N - 1);

    printf("Sorted Numbers: ");

    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");


    
}

void quicksort(int a[], int *low, int *high) {
    int *middle;

    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);

}

int *split(int a[], int *low, int *high) {
    int part_element = *low;

    while (1) {
        while (low < high && *high >= part_element) {
            high--;
        }
        if (low >= high) break;
        *(low++) = *high;

        while (low < high && *low <= part_element) {
            low++;
        }
        if (low >= high) break;
        *(high--) = *low;


    }
    *high = part_element;
    return high;

}