// Name: ch7_project3.c
// Purpose: Third project of chapter 7
// Author: Hisham Mohammed

#include <stdio.h>



int main(void) {
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    double n, total;
    scanf("%lf", &n);
    while (n != 0) {
        total += n;
        scanf("%lf", &n);
    }


    printf("The sum is: %lf\n", total);

}