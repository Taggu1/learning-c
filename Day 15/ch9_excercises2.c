// Name: ch0_excercises2.c
// Purpose: Excercises of chapter 10
// Author: Hisham Mohammed

#include <stdio.h>

int gcd(int n, int m);
int gcdR(int n, int m);
void pb(int n);

int main(void) {
    printf("%d\n", gcdR(2, 4));
    printf("%d\n", gcd(2, 4));

    int num;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("in binary: ");
        pb(num);
        printf("\n");
    } while (num != 0);

}


// 13

int evaluate_position(char board[8][8]) {
    int black_sum = 0;
    int white_sum = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char ch = board[i][j];

            switch (ch) {
            case 'Q': white_sum += 9; break;
            case 'R': white_sum += 5; break;
            case 'B': white_sum += 3; break;
            case 'N': white_sum += 3; break;
            case 'P': white_sum += 1; break;
            case 'q': black_sum += 9; break;
            case 'r': black_sum += 5; break;
            case 'b': black_sum += 3; break;
            case 'n': black_sum += 3; break;
            case 'p': black_sum += 1; break;
            }
        }
    }

    return white_sum - black_sum;

}

double median(double x, double y, double z) {
    int smallest = x, biggest = x, median;

    if (x <= y) {
        if (y <= z) {
            median = y;
        }
        else {
            median = z;
        }
    }
    else {
        if (x <= z) {
            median = x;
        }
        else {
            median = z;
        }
    }
    return median;

}


/// 2


int fact(int n) {
    return n <= 1 ? 1 : n * fact(n - 1);
}

int fact2(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}


///


int gcdR(int n, int m) {
    if (m == 0) return n;
    int remainder = n % m;
    n = m;
    m = remainder;


    return gcdR(m, n % m);
}

int gcd(int n, int m) {

    while (m != 0) {
        int remainder = n % m;
        n = m;
        m = remainder;
    }

    return n;
}

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}