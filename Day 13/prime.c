// Name: prime.c
// Purpose: Testing Whether a Number Is Prime
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;

}

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);


    printf(isPrime(number) ? "Prime\n" : "Not prime\n");
}