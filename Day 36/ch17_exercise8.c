
#include <stdbool.h>
#include <stdlib.h>

#include "stack.h"

#define STACK_SIZE 100

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;




bool is_empty() {
    return top == NULL;
}

void make_empty() {

    while (top != NULL) {
        struct node *temp = top;
        top = top->next;
        free(temp);
    }

}


bool push(int item) {
    if (is_full()) {
        stack_overflow();
    }

    struct node *new_node = malloc(sizeof(struct node));

    if (new_node == NULL) {
        return false;
    }
    new_node->data = item;
    new_node->next = top;
    top = new_node;

    return true;
}

int pop() {
    if (is_empty()) {
        stack_underflow();
    }
    struct node *temp = top;
    top = top->next;
    int value = temp->data;
    free(temp);
    return value;
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