// Name: ch9_project7.c
// Purpose: Seventh project of chapter 9
// Author: Hisham Mohammed

#include <stdio.h>

int power(int x, int n);

int main(void) {
    int x, n;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Resault: %d\n", power(x, n));
}

int power(int x, int n) {
    if (n == 0) return 1;
    return n % 2 == 0 ? power(x, n / 2) * power(x, n / 2) : (x * power(x, n - 1));
}