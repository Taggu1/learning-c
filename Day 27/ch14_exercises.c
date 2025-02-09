#include <stdio.h>
#include <string.h>
#include <math.h>

// 1.a
#define CUBE(x) ((x)*(x)) // WORKS
// 1.b
#define DIV_BY_4_REMAINDER(n) ((n)%4) // Only works with ints
// 1.c
#define MULTIPLICATION_LESS_THAN_100(x,y) ((x)*(y) < 100 ? 1 : 0 )

// 2 
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

// 3
#define DOUBLE(x) 2*x

// 3.c
#define DOUBLE_FIX(x) (2*(x))

// 4.a
#define AVG(x,y) (x+y) / 2
#define AVG_FIX(x,y) (((x)+(y)) / 2)
// 4.b
#define AREA(x,y) (x)*(y)
// 4 / AVG(2,2) will be 4 / 2 * 2, res = 4, which is false
#define AREA_FIX(x,y) ((x)*(y))
// 4 / AVG(2,2) will be 4 / (2 * 2), res = 1, which is true

// 5
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))


// 6.a
#define DISP(f,x) printf(#f "(%g) = %g\n",x,f(x))

// 6.b
#define DISP2(f,x,y) printf(#f "(%g,%g) = %g\n",(x),(y),f(x,y))

// 7
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) {\
return x > y ? x : y;           \
}                               \

GENERIC_MAX(long)

// // 7.a
// long long_max(long x, long y) {
//     return x > y ? x : y;
// }
// 7.b (because it gets only one token, and those types have 2 tokens)

// 7.c (we could make a new defnition)
#define UNSIGHNED_LONG unsigned long
GENERIC_MAX(UNSIGHNED_LONG)

// 8 
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define LINE_FILE "Line " TOSTRING(__LINE__) " of file " __FILE__

#define PRINT_INT(x) printf(#x " Is equal to: %d\n", x);

// 9.a
// #define CHECK(x,y,n) ((x) >= 0 && (x) < (n) && (y) >= 0 && (y) < (n) ? 1 : 0)

// 9.b
// #define MEDIAN(x,y,z) (((x) > (y) && (x) < (y)) || ((x) > (z) && (x) < (y)) ? x : \
//     (((y) > (x) && (y) < (z)) || ((y) > (z) && (y) < (x)) ? (y) : (z)))

// 9.c
#define POLYNOMIAL(x) ((3 * (x) * (x) * (x) * (x) * (x)) + (2 * (x) * (x) * (x) * (x))) \
- (5 * (x) * (x) * (x) ) - ((x) * (x)) + (7 * (x)) - 6

// 10 (if the function deals with sets of data like arrays and strings) 

// 11
#define ERROR(x,...) fprintf(stderr,x,__VA_ARGS__)


// 12
#define M 10

// 12.a
#if M // works
#endif
#ifdef M // works
#endif
#ifndef M // FAIL
#endif

// 16
#define IDENT(x) PRAGMA(ident #x)
#define PRAFMA(x) _Pragma(#x)

int main(void) {
    char s[100];

    // 3.a
    printf("%d\n", DOUBLE(1 + 2)); // 4
    // 3.b
    printf("%d\n", 4 / DOUBLE(2)); // 1 wrong, 4 right
    // 3.c

    // 5.a
    strcpy(s, "abcd");
    int i = 0;
    putchar(TOUPPER(s[++i])); // D
    printf("\n");

    // 5.b
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i])); // 3 wrong , 2 right
    printf("\n");

    DISP(log10, 3.0);

    const char *str = LINE_FILE;
    puts(LINE_FILE);

    // 9
    PRINT_INT(POLYNOMIAL(2));
    ERROR("Wow chill %d", 2);


}