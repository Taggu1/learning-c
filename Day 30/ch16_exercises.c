

#include <stdio.h>

// 1, legal as long as you don't add tags
struct { int x, y; } x;
struct { int x, y; } y;

// 2.a
// struct {
//     double real;
//     double imaginary;
// } c1, c2, c3;

// 2.b
struct {
    double real;
    double imaginary;
} c1 = { 0.0,0.0 }, c2 = { 1.0,0.0 }, c3;



int main(void) {
    // 2.c, yes the can, in one statement
    c1 = c2;

    c3.real = c1.real + c2.real;
    c3.imaginary = c2.imaginary + c1.imaginary;

    printf("real: %.2lf, imaginary: %.2lf\n", c3.real, c3.imaginary);

}