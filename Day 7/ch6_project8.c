// Name: ch6_project8.c
// Purpose: Eighth project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>


int main(void) {
    int monthDays, startingDay, currentDayOFWeek = startingDay;

    printf("Enter number of days in month: ");
    scanf("%d", &monthDays);

    printf("Enter starting day of the week (1=Sun,7=Sat): ");
    scanf("%d", &startingDay);


    currentDayOFWeek = startingDay;
    for (int i = 0; i <= startingDay; i++) {
        printf("  ");
    }


    for (int i = 1; i <= monthDays; i++) {
        printf("%4d", i);

        if (currentDayOFWeek == 7) { printf("\n"); currentDayOFWeek = 0; }
        currentDayOFWeek++;
    }
    printf("\n");


}