// Name: ch10_excercises.c
// Purpose: Excercises of chapter 10
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int check(int x, int y, int n);
int digit(int n, int k);

void swap(int a, int b);

int largest(int a[], int n);
int pos_count(int a[], int n);
int average(int a[], int n);
float compute_GPA(char grades[], int n);

int main(void) {


    // 2
    printf("%d\n", check(1, 2, 5));
    printf("%d\n", check(1, 6, 5));



    // 6
    printf("%d\n", digit(23423424, 4));
    printf("%d\n", digit(234, 2));
    printf("%d\n", digit(234, 3));


    // 9
    int i = 1, j = 2;
    swap(i, j);
    printf("i = %d, j = %d\n", i, j);

    // 11 

    printf("GPA: %f\n", compute_GPA((char[]) { 'A', 'A', 'A' }, 3));
    printf("GPA: %f\n", compute_GPA((char[]) { 'A', 'B', 'C', 'C' }, 4));


}


// 1
double triangle_area(double base, double height, double product) {
    product = base * height;
    return product / 2;
}


// 2
int check(int x, int y, int n) {
    return ((x >= 0 && x < n) && (y >= 0 && y < n)) ? 1 : 0;
}


// 3
int gcd(int n, int m) {

    while (m != 0) {
        int remainder = n % m;
        n = m;
        m = remainder;
    }

    return n;
}

// 4
int day_of_year(int month, int day, int year) {
    int day_of_year = day;
    bool isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    for (int currentMonth = 1; currentMonth < month; currentMonth++) {
        switch (currentMonth) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: day_of_year += 31; break;
        case 2: day_of_year += isLeap ? 29 : 28; break;
        case 4: case 6: case 9: case 11: day_of_year += 30; break;
        }
    }

    return day_of_year;

}


// 5
int num_digits(int n) {
    int count = 0;
    do {
        count++;
        n /= 10;
    } while (n != 0);

    return count;
}

// 6
int digit(int n, int k) {
    if (k > n) return 0;
    int count = 0;
    while (count < k - 1) {
        n /= 10;
        count++;
    }


    return n % 10;
}

// 9
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 10

int largest(int a[], int n) {
    int largestNum = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > largestNum) largestNum = a[i];
    }

    return largestNum;
}

int average(int a[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += a[i];
    }

    return total / n;

}

int pos_num(int a[], int n) {
    int pos_count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) pos_count++;
    }

    return pos_count;

}

float compute_GPA(char grades[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        char grade = grades[i];

        switch (toupper(grade)) {
        case 'A': total += 4; break;
        case 'B': total += 3; break;
        case 'C': total += 2; break;
        case 'D': total += 1; break;
        }
    }

    return total / n;

}

// 12

double inner_product(double a[], double b[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    return sum;
}

// 13

int evaluate_position(char board[8][8]) {
    int black_sum = 0;
    int white_sum = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char ch = board[i][j];

            switch (ch) {
            case 'Q': black_sum += 9; break;

            default:
                break;
            }
        }

    }

}