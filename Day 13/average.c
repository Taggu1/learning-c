// Name: average.c
// Purpose: Computing Averages
// Author: Hisham Mohammed

#include <stdio.h>


double average(double, double);

int main(void) {
    double num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    printf("Average of %.2lf and %.2lf: %.2lf\n", num1, num2, average(num1, num2));
    printf("Average of %.2lf and %.2lf: %.2lf\n", num2, num3, average(num2, num3));
    printf("Average of %.2lf and %.2lf: %.2lf\n", num1, num3, average(num1, num3));


}

double average(double a, double b) {
    return (a + b) / 2;
}
