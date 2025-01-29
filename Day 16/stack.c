// Name: stack.c
// Purpose: Making a stack
// Author: Hisham Mohammed

#include <stdbool.h>

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


void push(int num) {
    if (is_full()) {
        stack_overflow();
    }
    contents[top++] = num;
}

int pop() {
    if (is_empty) {
        stack_underflow();
    }
    else {
        return contents[--top];

    }
}

