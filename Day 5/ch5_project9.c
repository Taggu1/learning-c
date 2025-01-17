// Name: ch5_project9.c
// Purpose: Ninth project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int y1, y2, m1, m2, d1, d2;
    int earlierDate;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m1, &d1, &y1);


    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m2, &d2, &y2);

    if (y1 < y2) {
        earlierDate = 1;
    } else if (y2 < y1) {
        earlierDate = 2;
    } else {
        if (m1 < m2) {
        earlierDate = 1;
        } else if (m2 < m1) {
            earlierDate = 2;
        } else {
            if (d1 < d2) {
                earlierDate = 1;
            } else if (d2 < d1) {
                earlierDate = 2;
            } else {
                earlierDate = 0;
            }
        }
    }

    if (earlierDate == 0) {
        printf("You entered the same date\n");
    } else if (earlierDate ==1) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1,d1,y1,m2,d2,y2);
    } else if (earlierDate == 2) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2,d2,y2,m1,d1,y1);

    }
} 