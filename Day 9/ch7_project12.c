// Name: ch7_project12.c
// Purpose: Twelveth provect of chapter 7
// Author: Hisham Mohammed


#include <stdio.h>

int main(void) {
    float count = 0, operand1, operand2, operand3;
    char operator1, operator2;
    float resault = 0;
    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", &operand1, &operator1, &operand2, &operator2, &operand3);

    switch (operator1) {
    case '+': resault += (operand1 + operand2); break;
    case '-': resault += (operand1 - operand2); break;
    case '*': resault += (operand1 * operand2); break;
    case '/': resault += (operand1 / operand2); break;
    }




    switch (operator2) {
    case '+': resault += operand3; break;
    case '-': resault -= operand3; break;
    case '*': resault *= operand3; break;
    case '/': resault /= operand3; break;
    }

    printf("Value of expression: %.1f\n", resault);
}