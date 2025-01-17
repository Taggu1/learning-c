// Name: ch5_project7.c
// Purpose: Seventh project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {

    int num1, num2, num3, num4, largest, smalest;

    printf("Enter four integers:");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    if (num1 < num2) {
        if (num2 > num3 && num2 > num4) {
            largest = num2;
            if (num3 > num4) {
                smalest = num4 < num1 ? num4 : num1;
            }
            else {
                smalest = num3 < num1 ? num3 : num1;

            }
        }
        else {
            largest = num3 > num4 ? num3 : num4;
        }
    }
    else {
        if (num1 > num3 && num1 > num4) {
            largest = num1;
            if (num3 > num4) {
                smalest = num4 < num2 ? num4 : num2;
            }
            else {
                smalest = num3 < num2 ? num3 : num2;

            }
        }
        else {
            largest = num3 > num4 ? num3 : num4;
        }
    }
    printf("Largest: %d\n", largest);
    printf("Smalest: %d\n", smalest);
}