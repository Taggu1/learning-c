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
    const char *suits[] = { "clubs","diamonds","hearts","spades" };
    const char *ranks[] = { "Two","Three","Four","Five","Six","Seven","Eight","Nine",
    "Ten","Jack","Queen","King","Ace" };
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


        printf("%s of %s\n", ranks[randomRank], suits[randomSuit]);

    }

    printf("\n");

}