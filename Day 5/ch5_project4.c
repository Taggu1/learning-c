// Name: ch5_project5.c
// Purpose: Forth project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {

    int windSpeed;

    printf("Enter wind speed (knots): ");
    scanf("%d", &windSpeed);

    printf("The wind is: ");

    if (windSpeed < 1) {
        printf("Calm");
    }
    else if (windSpeed <= 3) {
        printf("Light air");
    }
    else if (windSpeed <= 27) {
        printf("Breeze");
    }
    else if (windSpeed <= 47) {
        printf("Gale");
    }
    else if (windSpeed <= 63) {
        printf("Storm");
    }
    else {
        printf("Hurricane");
    }

    printf("\n");

    return 0;
}