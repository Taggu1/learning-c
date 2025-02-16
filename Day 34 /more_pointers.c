

#include <stdlib.h>
#include <stdio.h>


int compare_ints(const void *p, const void *q);

double integrate(double (*f)(double), double a, double b) {
    return (*f)(b) - (*f)(a);
}


int main(void) {
    int numbers[] = { 4,5,6,71,23,4,6,8 };

    int len = sizeof(numbers) / sizeof(numbers[0]);


    qsort(numbers, len, sizeof(int), compare_ints);

    for (int i = 0; i < len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

}


int compare_ints(const void *p, const void *q) {
    const int *p1 = p;
    const int *q1 = q;
    if (*p1 < *q1) {
        return -1;
    } else if (*p1 > *q1) {
        return 1;
    } else {
        return 0;
    }
}