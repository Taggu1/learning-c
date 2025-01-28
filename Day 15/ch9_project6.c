// Name: ch9_project6.c
// Purpose: Sixth project of chapter 9
// Author: Hisham Mohammed

#include <stdio.h>

int power(int x, int n);
int calculate_polynomial(int x);

int main(void) {
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Resault: %d\n", calculate_polynomial(x));

}

int calculate_polynomial(int x) {
    return 3 * power(x,5) + 2 * power(x,4) - 5 * power(x,3) - power(x,2) + 7 * x - 6;
}

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n-1);
} 