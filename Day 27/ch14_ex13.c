

#include <stdio.h>


#define N 10

void f(void);

int main(void) {
    f();
#ifdef N
#undef N
#endif
    return 0;
}

void f(void) {
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefiend");
#endif

}