// Name: ch5_project2.c
// Purpose: Second project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int hours, minutes;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%2d:%2d", &hours, &minutes);

    printf("Equivalent 12-hour time: ");

    if (hours >= 12 && hours != 24) {
        hours -= 12;

        printf("%.2d:%.2d PM\n", hours != 0 ? hours : 12, minutes);
    }
    else {
        printf("%.2d:%.2d AM\n", hours != 0 ? hours : 12, minutes);

    }

}