
// Name: recursion.c
// Purpose: Testing recursion
// Author: Hisham Mohammed

int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n-1);
} 