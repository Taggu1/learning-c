

#include <stdio.h>

void print_n();


int main(void) {
    static float x, y[10], *p;

    for (int i = 0; i < 10; i++) {
        print_n();
    }

}

inline double average(double a, double b) {
    return (a + b) / 2;
}

void print_n() {
    int i;
    printf("%d\n", i);

}

char digit_to_hex_char(int digit) {
    static const char hex_chars[16] = "0123456789ABCDEF";

    return hex_chars[digit];
}


int sum_arry(int arr[], int n) {
    int sum = 0;

    for (register int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}