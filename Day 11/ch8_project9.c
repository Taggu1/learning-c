// Name: ch8_project9.c
// Purpose: Nineth project of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_LEN 10
#define NUM_DIRECTIONS 4

int main(void) {
    srand(time(NULL));
    char terrain[ARR_LEN][ARR_LEN];

    for (int i = 0; i < ARR_LEN; i++) {
        for (int j = 0; j < ARR_LEN; j++) {
            terrain[i][j] = '.';
        }
    }

    terrain[0][0] = 'A';
    char currentChar = 'B';


    int currentRow = 0;
    int currentColumn = 0;
    while (currentChar <= 'Z') {
        /* code */
        int randomDirection = rand() % NUM_DIRECTIONS;

        int newRow, newColumn;

        int a[4] = { 0 };

        while (a[0] == 0 || a[1] == 0 || a[2] == 0 || a[3] == 0) {
            int randomDirection = rand() % NUM_DIRECTIONS;

            a[randomDirection] = 1;
            switch (randomDirection) {
            case 0: newRow = currentRow + 1; a[0] = 1; break;
            case 1: newRow = currentRow - 1; a[1] = 1; break;
            case 2: newColumn = currentColumn - 1; a[2] = 1; break;
            case 3: newColumn = currentColumn + 1; a[3] = 1; break;
            }


            if (newColumn < 10 && newColumn >= 0 && newRow < 10 && newRow >= 0 && terrain[newRow][newColumn] == '.') {
                currentRow = newRow;
                currentColumn = newColumn;
                terrain[currentRow][currentColumn] = currentChar;
                break;
            }
            newRow = currentRow;
            newColumn = currentColumn;
        }

        if (a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            a[i] = 0;
        }






        currentChar += 1;
    }




    for (int i = 0; i < ARR_LEN; i++) {
        for (int j = 0; j < ARR_LEN; j++) {
            printf("%c ", terrain[i][j]);
        }
        printf("\n");
    }

}