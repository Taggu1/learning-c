#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"



struct stack_type {
    Item *contents;
    int max_size;
    int top;
};

static void terminate(const char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(Stack s) {
    s->top = 0;
}

bool is_empty(Stack s) {
    return s->top == 0;
}

bool is_full(Stack s) {
    return s->top == s->max_size;
}

void push(Stack s, Item i) {
    if (is_full(s)) {
        s->max_size *= 2;
        s->contents = realloc(s->contents, sizeof(Item) * s->max_size);

        if (s->contents == NULL) {
            terminate("Error in push: memory allocation failed");
        }
    }
    s->contents[s->top++] = i;
}

Item pop(Stack s) {
    if (is_empty(s)) {
        terminate("Error in pop: stack is empty.");
    }
    return s->contents[s->top--];
}

Stack create(int size) {
    Stack s = malloc(sizeof(struct stack_type));

    if (s == NULL)
        terminate("Error in create: stack could not be created");

    s->top = 0;
    s->max_size = size;
    s->contents = malloc(sizeof(Item) * s->max_size);

    if (s->contents == NULL) {
        free(s);
        terminate("Error in create: stack could not be created");
    }

    return s;
}

void destroy(Stack s) {
    free(s->contents);
    free(s);
}