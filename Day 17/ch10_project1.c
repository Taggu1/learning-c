// Name: ch10_project1.c
// Purpose: First project of chapter 10
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;


bool is_full();
bool is_empty();
void make_empty();
void push(char item);
char pop();
void stack_overflow();
char stack_underflow();



int main(void) {
    bool nestedProperly;

    printf("Enter parentheses and/or braces: ");

    char ch;
    while ((ch = getchar()) != '\n') {

        if (ch == '{' || ch == '(') {

            push(ch);
        }
        else if (ch == '}' || ch == ')') {

            char popped = pop();

            if ((ch == '}' && popped == '{') || (ch == ')' && popped == '{')) {
                continue;
            }
            else {
                nestedProperly = false;

            }
        }
    }


    if (is_empty()) {
        nestedProperly = true;
    }
    else {
        nestedProperly = false;
    }

    if (nestedProperly) {
        printf("Parentheses/braces are nested properly\n");

    }
    else {
        printf("Parentheses/braces are not nested properly\n");

    }




}



bool is_full() {
    return top == STACK_SIZE;
}

bool is_empty() {
    return top == 0;
}

void make_empty() {
    top = 0;
}


void push(char item) {
    if (is_full()) {
        stack_overflow();
    }
    contents[top++] = item;
}

char pop() {
    if (is_empty()) {
        return stack_underflow();
    }
    else {
        return contents[--top];
    }
}

void stack_overflow() {
    printf("Stack overflow\n");
    exit(1);
}

char stack_underflow() {
    printf("Parentheses/braces are not nested properly\n");

    exit(1);
    return 'c';

}