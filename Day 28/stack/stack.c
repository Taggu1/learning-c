
#include <stdbool.h>

#include "stack.h"

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;


bool is_full() {
    return top == STACK_SIZE;
}

bool is_empty() {
    return top == 0;
}

void make_empty() {
    top = 0;
}


void push(int item) {
    if (is_full()) {
        stack_overflow();
    }
    contents[top++] = item;
}

int pop() {
    if (is_empty()) {
        return stack_underflow();
    } else {
        return contents[--top];
    }
}

void stack_overflow() {
    printf("Expression is to complex\n");
    exit(1);
}

int stack_underflow() {
    printf("Not enough operands in expression\n");

    exit(1);
    return 1;

}