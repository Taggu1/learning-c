// Name: ch6_project10.c
// Purpose: Tenth project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int y1 = 1000, y2 = 1000, m1 = 1000, m2 = 1000, d1 = 1000, d2 = 1000;
    int earlierDate;



    do {

        if (y1 < y2) {
            earlierDate = 1;
        }
        else if (y2 < y1) {
            earlierDate = 2;
        }
        else {
            if (m1 < m2) {
                earlierDate = 1;
            }
            else if (m2 < m1) {
                earlierDate = 2;
            }
            else {
                if (d1 < d2) {
                    earlierDate = 1;
                }
                else if (d2 < d1) {
                    earlierDate = 2;
                }
                else {
                    earlierDate = 0;
                }
            }
        }

        if (earlierDate == 1) {
            m2 = m1;
            y2 = y1;
            d2 = d1;
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &m1, &d1, &y1);

    } while (d1 != 0 && y1 != 0 && m1 != 0);


    printf("%.2d/%.2d/%.2d is the earliest date\n", m2, d2, y2);


}