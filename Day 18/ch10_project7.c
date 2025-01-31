// Name: ch10_project7.c
// Purpose: Seventh project of chapter 10
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10
#define ROW_NUM 4
#define COL_NUM (MAX_DIGITS * 4)

const int segments[10][7] = {
{1,1,1,1,1,1},
    {0, 1, 1, 0, 0, 0, 0},  // 1
    {1, 1, 0, 1, 1, 0, 1},  // 2
    {1, 1, 1, 1, 0, 0, 1},  // 3
    {0,1,1,0,0,1,1}, // 4
    {1, 0, 1, 1, 0, 1, 1},  // 5
    {1, 0, 1, 1, 1, 1, 1},  // 6
    {1, 1, 1, 0, 0, 0, 0},  // 7
    {1, 1, 1, 1, 1, 1, 1},  // 8
    {1, 1, 1, 1, 0, 1, 1}   // 9
};

// Function prototypes
void clear_digits_array(void);
void processDigit(int digit, int position);
void print_digits_array(void);

char digits[ROW_NUM][COL_NUM];

int main(void) {
    clear_digits_array();

    printf("Enter a number: ");

    int count = 0, ch;
    while ((ch = getchar()) != '\n' && count < MAX_DIGITS) {
        if (isdigit(ch)) {
            processDigit(ch - '0', count++);
        }
    }

    print_digits_array();
    return 0;
}

// Clears the digits array with spaces
void clear_digits_array(void) {
    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            digits[i][j] = ' ';
        }
    }
}

void processDigit(int digit, int position) {
    int offset = position * 4;

    if (segments[digit][0]) digits[0][offset + 1] = '-'; // Top
    if (segments[digit][1]) digits[1][offset + 2] = '|'; // Upper right
    if (segments[digit][2]) digits[2][offset + 2] = '|'; // Lower right
    if (segments[digit][3]) digits[3][offset + 1] = '-'; // Bottom
    if (segments[digit][4]) digits[2][offset] = '|';     // Lower left
    if (segments[digit][5]) digits[1][offset] = '|';     // Upper left
    if (segments[digit][6]) digits[2][offset + 1] = '-'; // Middle
}

// Prints the digit array
void print_digits_array(void) {
    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
