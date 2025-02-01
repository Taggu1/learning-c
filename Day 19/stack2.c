#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = &contents[0];

bool is_full() {
    return *top_ptr == &contents[STACK_SIZE];
}

bool is_empty() {
    return *top_ptr == &contents[0];
}

void make_empty() {
    *top_ptr = &contents[0];
}


void push(int num) {
    if (is_full()) {
        stack_overflow();
    }
    *top_ptr++ = num;
}

int pop() {
    if (is_empty) {
        stack_underflow();
    }
    else {
        return *--top_ptr;

    }
}

