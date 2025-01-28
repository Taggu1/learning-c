// Name: ch9_project8.c
// Purpose: Eight project of chapter 9
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    srand(time(NULL));
    play_game();
}

bool play_game() {
    int wins = 0, losess = 0, point;
    char playerChoice;
    bool firstRoll;
    do {
        while (getchar() != '\n') {}


        bool playerWon;
        int roll_sum = roll_dice();
        printf("You rolled: %d\n", roll_sum);
        if (firstRoll) {
            if (roll_sum == 7 || roll_sum == 11) {
                playerWon = true;
            }
            else if (roll_sum == 2 || roll_sum == 3) {
                playerWon = false;
            }
            else {
                point = roll_sum;
                firstRoll = false;
                printf("Your point is %d\n", point);
                continue;
            }
            firstRoll = false;
        }
        else {
            if (roll_sum == point) {
                playerWon = true;
                wins += 1;

            }
            else if (roll_sum == 7) {
                playerWon = false;
                losess += 1;

            }
            else {
                continue;
            }
        }

        if (playerWon) {

            printf("You win!\n");
        }
        else {
            printf("You lose!\n");
        }
        firstRoll = true;
        point = 0;

        printf("Play again? ");
        scanf("%c", &playerChoice);
    } while (toupper(playerChoice) != 'N');
    printf("\nWins: %d  Losses: %d\n", wins, losess);
    return wins > losess;
}

int roll_dice(void) {
    return (rand() % 6) + (rand() % 6);
}