// Name: ch7_project8.c
// Purpose: Eights project of chapter 7
// Author: Hisham Mohammed

// Name: ch5_project8.c
// Purpose: eighth project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hours, minutes, minutesSinceMidnight;
    char character;

    printf("Enter a 12-hour time (hh:mm): ");
    scanf("%2d:%2d %c", &hours, &minutes, &character);
    character = toupper(character);

    if (character == 'P') {
        hours = hours + 12;
    }


    minutesSinceMidnight = hours * 60 + minutes;

    printf("Closest departure time is ");

    if (minutesSinceMidnight <= 500) {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (minutesSinceMidnight <= 600) {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (minutesSinceMidnight <= 720) {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (minutesSinceMidnight <= 810) {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (minutesSinceMidnight <= 900) {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (minutesSinceMidnight <= 1065) {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (minutesSinceMidnight <= 1200) {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }

}