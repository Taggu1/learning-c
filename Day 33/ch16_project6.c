#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int month;
    int day;
    int year;
} Date;


int compare_dates(Date d1, Date d2);
int day_of_year(Date d);

int main(void) {
    int y1, y2, m1, m2, d1, d2;
    int earlierDate;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m1, &d1, &y1);
    Date date1 = {
        .month = m1,
        .year = y1,
        .day = d1,
    };


    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m2, &d2, &y2);
    Date date2 = {
        .month = m2,
        .year = y2,
        .day = d2,
    };

    int resault = compare_dates(date1, date2);
    if (resault == 0) {
        printf("You entered the same date\n");
    } else if (resault == -1) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
    } else if (resault == 1) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
            date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);

    }
}



int day_of_year(Date d) {
    int day_of_year = d.day;
    bool isLeap = ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0));

    for (int currentMonth = 1; currentMonth < d.month; currentMonth++) {
        switch (currentMonth) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: day_of_year += 31; break;
            case 2: day_of_year += isLeap ? 29 : 28; break;
            case 4: case 6: case 9: case 11: day_of_year += 30; break;
        }
    }

    return day_of_year;
}


int compare_dates(Date d1, Date d2) {
    int d1_day_of_year = day_of_year(d1) + d1.year;
    int d2_day_of_year = day_of_year(d2) + d2.year;

    if (d1_day_of_year < d2_day_of_year) {
        return -1;
    } else if (d1_day_of_year > d2_day_of_year) {
        return +1;
    } else {
        return 0;
    }
}