
// Import io header
#include <stdio.h>

// declare a function that takes another function (that takes an integer and returns an integer)
int f1(int (*f) (int));
// declare a function that takes an integer and returns an integer
int f2(int i);

int main(void) {
    // output
    printf("Answer: %d\n", f1(f2)); // prints value of n
    return 0;
}

int f1(int (*f) (int)) {
    int n = 0;
    while (f(n)) n++; // increase n until function returns 0
    return n; // return value of in
}

int f2(int i) {
    return i*i+i-12; // zero when I equals = 3
} 