
#include <stdio.h>

// 3.c
#define MAX_FILES 10

// 1.a
static /*Storage class*/ char /*Type spec*/ **lookup(int level); // delarators;
// 1.b
volatile /*type qualifires*/ unsigned long  /*type specs*/ io_flags;
// 1.c
extern /*storage class*/ char /*type specs*/ *file_name[MAX_FILES], path[]; // declarators;
// 3.d
static /*storage class*/ const /*type qualifiers*/ char /*type specs*/ token_buff[] /*declaratos*/ = ""; /*initlixor*/

// 3
extern float a; // static, file, external

void f(register double b /*auto, block, internal*/) {
    static int c; // static, block, internal
    auto char d; // auto, block, interna;
}

// 4, zero if called the first time, 50 if was called 5 times before

//5
// 5.a: false, some can be with block scope in functions
// 3.b: false, some can have linkage
// 3.c: true
// 3.d: true

// 6
void print_error(const char *message) {
    // int n = 1, error
    static int n = 1; // WORKS
    printf("Error %d: %s\n", n++, message);
}

// 7
// 7.a: false,
// 7.b: true
// 7.c: true
// 7.d: true

int main(void) {
    // 2.a (extern)
    // 2.b (static)
    // 2.c (static, register, auto)

    // 8
    // 8.a
    char (*x[10])(int); // a list of pointers of functions that takes int and returns char
    // 8.b
    int (*x(int))[5]; // a function to a pointer, 
    // 8.c
    float *(*wx(void))(int); // a function pointer, that takes int and returns a float pointer
    // 8.d
    void (*xw(int, void (*y)(int)))(int); // a functin pointer to a function that takes ing and a function that 
    // takes int and returns void pointer, and takes int and returns void;

    // 10
    // 10.a
    char *(*p(char *));
}