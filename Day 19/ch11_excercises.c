

#include <stdio.h>
#include <stdbool.h>

void swap(int *p, int *q);
void split_time(long total_sec, int *hr, int *min, int *sec);
void find_two_largest(int a[], int n, int *largest,int *second_largest);
void split_date(int day_of_year, int year,int *month ,int *day);

int main(void) {
    int num1 = 20, num2 = 30;
    int hour, min, seconds;
    swap(&num1,&num2);
    split_time(7600,&hour,&min,&seconds);
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n",hour,min,seconds);
    int largest,second;

    find_two_largest((int []) {500,5,412,3,515,23,13,7000}, 8,&largest,&second);
    printf("Largest: %d,Second: %d\n",largest,second);
    int month,day;
    split_date(60,2023,&month,&day);
    printf("Month: %d,Day: %d\n",month,day);
}

void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0;

    for (int i = 0; i < n; i++) {
        *sum += a[i];
    }

    *avg = *sum / n;
}

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec =  total_sec % 60;
}

void find_two_largest(int a[], int n, int *largest,int *second_largest) {
    *largest = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        }
    }
    
}

void split_date(int day_of_year, int year,int *month ,int *day) {
    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    if (isLeap && day_of_year > 31) day_of_year -= 1;
    if (day_of_year <= 31) {
        *month = 1;
        *day = day_of_year;
    } else if (day_of_year <= 59) {
        *month = 2;
        if (isLeap) day_of_year ++;

        *day = day_of_year - 31;
    } else if (day_of_year <= 90) {
        *month = 3;
        *day = day_of_year - 59;
    } else if (day_of_year <= 120) {
        *month = 4;
        *day = day_of_year - 90;
    } else if (day_of_year <= 151) {
        *month = 5;
        *day = day_of_year - 120;
    } else if (day_of_year <= 181) {
        *month = 6;
        *day = day_of_year - 151;
    } else if (day_of_year <= 212) {
        *month = 7;
        *day = day_of_year - 181;
    }  else if (day_of_year <= 243) {
        *month = 8;
        *day = day_of_year - 212;
    } else if (day_of_year <= 273) {
        *month = 9;
        *day = day_of_year - 243;
    } else if (day_of_year <= 304) {
        *month = 10;
        *day = day_of_year - 273;
    }  else if (day_of_year <= 334) {
        *month = 11;
        *day = day_of_year - 304;
    }  else if (day_of_year <= 365) {
        *month = 12;
        *day = day_of_year - 334;
    }


}

int *find_largest(int a[],int n) {
    int *largest = &a[0];

    for (int i = 0; i < n; i++)
    {
        if (*largest < a[i]) *largest = a[i];
    }
    return largest;
    
}