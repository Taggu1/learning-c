// Name: ch9_project1.c
// Purpose: First project of chapter 9
// Author: Hisham Mohammed

#include <stdio.h>

#define N 100

void selection_sort(int a[], int n);

int main(void) {

    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);


    int arrOfInts[n];

    printf("Enter a series of integers: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arrOfInts[i]);
    }


    selection_sort(arrOfInts, n);

    printf("Sorted numbers: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arrOfInts[i]);
    }
    printf("\n");



    return 0;
}

void selection_sort(int a[], int n) {
    if (n == 0) return;
    int largest = 0, largestIndex;

    for (int i = 0; i < n; i++) {
        if (a[i] >= largest) {
            largest = a[i];
            largestIndex = i;
        }
    }

    int temp = a[n - 1];
    a[n - 1] = largest;
    a[largestIndex] = temp;


    selection_sort(a, n - 1);
}