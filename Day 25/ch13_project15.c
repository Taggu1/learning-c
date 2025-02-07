
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 100
#define EXPRESSION_LENGTH 150

int contents[STACK_SIZE];
int top = 0;


bool is_full();
bool is_empty();
void make_empty();
void push(int item);
int pop();
void stack_overflow();
int stack_underflow();
int read_line(char *str, int n);
int evaluate_RPN_expression(const char *expression);


int main(void) {
    char expression[EXPRESSION_LENGTH];
    printf("Enter an RPN expression: ");
    read_line(expression, EXPRESSION_LENGTH);




    printf("Value of expression: %d\n", evaluate_RPN_expression(expression));



}


int evaluate_RPN_expression(const char *expression) {
    int final_res;



    for (int i = 0; i < strlen(expression); i++) {
        if (isalpha(expression[i])) {
            exit(0);
        }

        if (expression[i] == ' ') continue;

        if (expression[i] == '=') {
            final_res = pop();
            break;
        }

        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else {
            int operand1 = pop();
            int operand2 = pop();



            if (expression[i] == '+') {
                push(operand1 + operand2);
            } else if (expression[i] == '-') {
                push(operand2 - operand1);
            } else if (expression[i] == '*') {
                push(operand1 * operand2);
            } else if (expression[i] == '/') {
                push(operand2 / operand1);
            }
        }
    }


    return final_res;
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

int read_line(char *str, int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF && i < n) {
        str[i++] = ch;
    }
    str[i] = '\0';

    return i;
}