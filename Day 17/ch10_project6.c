// Name: ch10_project6.c
// Purpose: Sixth project of chapter 10
// Author: Hisham Mohammed


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;


bool is_full();
bool is_empty();
void make_empty();
void push(int item);
int pop();
void stack_overflow();
int stack_underflow();



int main(void) {
    bool nestedProperly;

    printf("Enter an RPN expression: ");

    char ch;
    int final_res;
    scanf(" %c", &ch);
    while (ch != '\n') {
        if (isalpha(ch)) {
            exit(0);
        }

        if (ch == '=') {
            final_res = pop();
            break;
        }

        if (isdigit(ch)) {
            push(ch - '0');
        }
        else {

            int operand1 = pop();
            int operand2 = pop();



            if (ch == '+') {
                push(operand1 + operand2);
            }
            else if (ch == '-') {
                push(operand2 - operand1);
            }
            else if (ch == '*') {
                push(operand1 * operand2);
            }
            else if (ch == '/') {
                push(operand2 / operand1);
            }


        }
        scanf(" %c", &ch);

    }

    printf("Value of expression: %d\n", final_res);



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


void push(int item) {
    if (is_full()) {
        stack_overflow();
    }
    contents[top++] = item;
}

int pop() {
    if (is_empty()) {
        return stack_underflow();
    }
    else {
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