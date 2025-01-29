
// Name: guess.c
// Purpose: Guessing a Number
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


#define MAX_NUMS 100

void initilize_random_number();
int generate_secret_number();
void play_game(int secret_number);



int main(void) {
    initilize_random_number();
    printf("Guess the secret number between 1 and 100.\n");
    char playerChoice;
    do {
        printf("\nA new number has been chosen.\n");

        int secret_num = generate_secret_number();
        play_game(secret_num);
        printf("Play again? (Y/N) ");
        scanf("%c");
        scanf("%c", &playerChoice);
    } while (tolower(playerChoice) != 'n');

}


void initilize_random_number() {
    srand(time(NULL));
}

int generate_secret_number() {
    return rand() % (MAX_NUMS + 1);
}

void play_game(int secret_number) {
    int guess, count = 0;


    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess > secret_number) {
            printf("Too high; try again.\n");
        }
        else if (guess < secret_number) {
            printf("Too low; try again.\n");
        }
        count++;
    } while (guess != secret_number);
    printf("You won in %d guesses.\n", count);

}

