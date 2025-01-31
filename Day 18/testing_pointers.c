// Name: testing_pointers.c
// Purpose: Testing pointers
// Author: Hisham Mohammed


#include <stdio.h>

void decompose(double q, long *int_part, double *frac_part);

int main(void) {
    double userNum, frac_part;
    long int_part;

    printf("Enter double number to decompose: ");
    scanf("%lf", &userNum);

    decompose(userNum, &int_part, &frac_part);

    printf("Int part: %ld\n", int_part);
    printf("Fraction part: %.2lf\n", frac_part);

    int i = 1, *p = &i;

    printf("%p\n", p);

}


void decompose(double q, long *int_part, double *frac_part) {
    *int_part = (long) q;
    *frac_part = q - *int_part;
}

int *max(int *a, int *b) {
    if (*a > *b)
        return a;
    else
        return b;
}