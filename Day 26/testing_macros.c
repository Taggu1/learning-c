


#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define IS_EVEN(n) ((n)%2==0)
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
#define log(n) puts(n)
#define PRINT_INT(n) printf(#n " = %d\n",n)
#define MAKE_ID(n) i##(n)

#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{                               \
return x > y ? x : y;           \
}                               \


#define ECHO(s) \
do {            \
fgets(s,80,stdin);        \
puts(s);        \
} while(0)        \


GENERIC_MAX(float)

int main(void) {

}