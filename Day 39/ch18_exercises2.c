
struct t {};


void update();
void insert();
void search();
void print();

int main(void) {
    // 10.b
    void (*f2(struct t, long n))(void);
    // 10.c
    void (*a[4])(void) = { update,insert,search,print };
    // 10.d
    struct t(*b[10])(int, int);

    // 11
    int *f(int);
    int (*g(int))(int);
    int (*a[10])(int);

    // 12
    // 12.a: a function that takes 1. a function that takes a long as an argument
    // and returns a float 2. a string (I assume), then returns a pointer to a function
    // that takes a double and returns an int

    // 13
    // all are legal, wrong, b is illegal

    //e
    // 15: a


}
