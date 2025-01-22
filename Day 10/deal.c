// Name: deal.c
// Purpose: deals a random hands of cards
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
    srand(time(NULL));
    const char suits[] = { 'c','d','h','s' };
    const char ranks[] = { '2','3','4','5','6','7','8','9','t','j','q','k','a' };
    bool in_hand[NUM_SUITS][NUM_RANKS] = { false };

    int NumberOfCards;

    printf("Enter number of cards in hand: ");
    scanf("%d", &NumberOfCards);

    printf("Your Hand: ");

    for (int i = 0; i < NumberOfCards; i++) {
        int randomSuit, randomRank;
        do {
            randomSuit = rand() % NUM_SUITS;
            randomRank = rand() % NUM_RANKS;
        } while (in_hand[randomSuit][randomRank] == true);
        in_hand[randomSuit][randomRank] = true;

        putchar(suits[randomSuit]);
        putchar(ranks[randomRank]);
        printf(" ");

    }

    printf("\n");

}