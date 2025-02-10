// Name: ch10_project6.c
// Purpose: Sixth project of chapter 10
// Author: Hisham Mohammed


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"






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
        } else {

            int operand1 = pop();
            int operand2 = pop();



            if (ch == '+') {
                push(operand1 + operand2);
            } else if (ch == '-') {
                push(operand2 - operand1);
            } else if (ch == '*') {
                push(operand1 * operand2);
            } else if (ch == '/') {
                push(operand2 / operand1);
            }


        }
        scanf(" %c", &ch);

    }

    printf("Value of expression: %d\n", final_res);



}


