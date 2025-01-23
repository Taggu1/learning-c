// Name: ch8_project10.c
// Purpose: Tenth project of chapter
// Author: Hisham Mohammed

#include <stdio.h>

#define FLIGHTS_NUM 8

int main(void) {
    int hours, minutes, minutesSinceMidnight;

    int departureTimes[FLIGHTS_NUM] = { 480,583,679,767,840,945,1140,1305 };
    int arrivalTimes[FLIGHTS_NUM] = { 616,712,811,900,968,1075,1280,1438 };



    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%2d:%2d", &hours, &minutes);

    minutesSinceMidnight = hours * 60 + minutes;

    int closestIndex = 0;

    for (int i = 0; i < FLIGHTS_NUM; i++) {
        if ((minutesSinceMidnight - departureTimes[i]) >= 0 && (minutesSinceMidnight - departureTimes[i]) < (minutesSinceMidnight - departureTimes[closestIndex])) {
            closestIndex = 1;
        }
    }

    int departureHour, departureMinute, arrivalHour, arrivalMinute;

    departureHour = departureTimes[closestIndex] / 12;
    departureMinute = departureTimes[closestIndex] % 12;

    arrivalHour = arrivalTimes[closestIndex] / 12;
    arrivalMinute = arrivalTimes[closestIndex] % 12;

    if (departureHour > 12 && arrivalHour > 12) {
        printf("%.2d:%.2d p.m., arriving at %.2d:%.2d p.m.\n", departureHour - 12, departureMinute, arrivalHour - 12, arrivalMinute);
    }
    else if (departureHour > 12) {
        printf("%.2d:%.2d p.m., arriving at %.2d:%.2d a.m.\n", departureHour - 12, departureMinute, arrivalHour, arrivalMinute);

    }
    else if (arrivalHour > 12) {
        printf("%.2d:%.2d a.m., arriving at %.2d:%.2d p.m.\n", departureHour, departureMinute, arrivalHour - 12, arrivalMinute);

    }
    else {
        printf("%.2d:%.2d a.m., arriving at %.2d:%.2d a.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);

    }


}