


#include <stdio.h>
#include <string.h>


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

}