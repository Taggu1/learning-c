// Name: ch7_project7.c
// Purpose: Sevnth project of chapter 7
// Author: Hisham Mohammed


#include <stdio.h>

int main(void) {
    int num1, num2, denom1, denom2, fraction1, fraction2, resault_num, resault_denom;
    char opreator;
    printf("Enter two fractions seperated by an opreator (+, -, /, *): ");
    scanf("%d /%d %c%d /%d", &num1, &denom1, &opreator, &num2, &denom2);
    if (opreator == '+') {
        resault_num = num1 * denom2 + num2 * denom1;
        resault_denom = denom1 * denom2;
    }
    else if (opreator == '-') {
        resault_num = num1 * denom2 - num2 * denom1;
        resault_denom = denom1 * denom2;
    }
    else if (opreator == '*') {
        resault_num = num1 * num2;
        resault_denom = denom1 * denom2;
    }
    else if (opreator == '/') {
        resault_num = num1 / num2;
        resault_denom = denom1 / denom2;
    }
    else {
        printf("Invalid opreator\n");
        return 0;
    }


    printf("Resault: %d/%d\n", resault_num, resault_denom);

    return 0;
}