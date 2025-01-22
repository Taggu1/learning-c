// Name: ch8_exercises.c
// Purpose: Exercises of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdbool.h>

#define FIB_NUMBERS 40

int main(void) {

    /// 2
    char a[10];

    //a['1' - '0'];

    //3
    bool weekend1[7] = { 1,0,0,0,0,0,1 };

    //4
    bool weekend[7] = { [0] = true,[6] = false };

    // // 5
    // int fib_numbers[FIB_NUMBERS] = { 0,1 };

    // for (int i = 0; i < FIB_NUMBERS - 2; i++) {
    //     fib_numbers[i + 2] = fib_numbers[i] + fib_numbers[i + 1];
    // }

    // for (int i = 0; i < FIB_NUMBERS; i++) {
    //     printf("%4d ", i);
    // }

    const int segments[10][7] = { {1,1,1,1,1,1,0},
                                  {0,1,1,0,0,0,0},
                                  {1,1,0,1,1,0,1},
                                  {1,1,1,1,0,0,1},
                                  {0,1,0,1,0,1,1},
                                  {1,0,1,1,0,1,1},
                                  {1,0,1,1,1,1,1},
                                  {1,1,1,0,0,0,0},
                                  {1,1,1,1,1,1,1},
                                  {1,1,1,1,0,1,1} };

    const int segments2[10][7] = { {1,1,1,1,1,1},
                                  {0,1,1},
                                  {1,1,0,1,1,0,1},
                                  {1,1,1,1,0,0,1},
                                  {0,1,1,0,0,1,1},
                                  {1,0,1,1,0,1,1},
                                  {1,0,1,1,1,1,1},
                                  {1,1,1},
                                  {1,1,1,1,1,1,1},
                                  {1,1,1,1,0,1,1} };

    const int temperature_readings[30][24] = { 0 };

    float temperature_total = 0;
    float count = 30 * 24;
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 24; j++) {
            temperature_total += temperature_readings[i][j];
        }

    }
    float average_temp = temperature_total / count;


    // 10
    const char chess_board[8][8] = {
        [0] = { 'r' ,'n' ,'b', 'a', 'k', 'o', 'n' ,'r'},
        [1] = {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        [6] = {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        [7] = {'R' ,'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    char checker_board[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) checker_board[i][j] = 'B';
            else checker_board[i][j] = 'R';
        }

    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf(" %c ", checker_board[i][j]);
        }
        printf("\n");

    }
    printf("\n");
}