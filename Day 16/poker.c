// Name: poker.c
// Purpose: Classfinng a poker hand
// Author: Hisham Mohammed

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#define RANKS_NUM 13
#define SUITS_NUM 4
#define CARDS_COUNT 5

int num_in_ranks[RANKS_NUM];
int num_in_suits[SUITS_NUM];
bool four_of_a_kind = false, full_house = false, three_of_a_kind = false,
pair = false, flush = false, straight_flush = false, high_card = false, straight = false;




void read_cards();
void analyze_hand();
void print_result();

int main(void) {



    while (1) {
        for (int i = 0; i < RANKS_NUM; i++) {
            num_in_ranks[i] = 0;
        }

        for (int i = 0; i < SUITS_NUM; i++) {
            num_in_suits[i] = 0;
        }


        read_cards();
        analyze_hand();
        print_result();
    }
}

void read_cards() {



    bool card_exists[RANKS_NUM][SUITS_NUM] = { false };



    int count = 0;

    while (count < CARDS_COUNT) {
        int currentRank, currentSuit;
        char currentRankChar, currentSuitChar;

        printf("Enter a card: ");
        currentRankChar = getchar();

        if (currentRankChar == '0') {
            exit(0);
        }

        currentSuitChar = getchar();
        getchar();

        switch (tolower(currentRankChar)) {
        case '2': currentRank = 0; break;
        case '3': currentRank = 1; break;
        case '4': currentRank = 2; break;
        case '5': currentRank = 3; break;
        case '6': currentRank = 4; break;
        case '7': currentRank = 5; break;
        case '8': currentRank = 6; break;
        case '9': currentRank = 7; break;
        case 't': currentRank = 8; break;
        case 'j': currentRank = 9; break;
        case 'q': currentRank = 10; break;
        case 'k': currentRank = 11; break;
        case 'a': currentRank = 12; break;
        default: currentRank = -1; break;
        }

        switch (tolower(currentSuitChar)) {
        case 'c': currentSuit = 0; break;
        case 'd': currentSuit = 1; break;
        case 'h': currentSuit = 2; break;
        case 's': currentSuit = 3; break;
        default: currentSuit = -1; break;
        }

        if (currentSuit == -1 || currentRank == -1) {
            printf("Bad card; ignored.\n");
            continue;
        }
        else if (card_exists[currentRank][currentSuit]) {
            printf("Duplicate card; ignored.\n");
            continue;
        }


        num_in_ranks[currentRank]++;
        num_in_suits[currentSuit]++;
        card_exists[currentRank][currentSuit] = true;
        count++;

    }

}


void analyze_hand() {



    int straightCount = 0;
    for (int i = 0; i < RANKS_NUM; i++) {
        if (num_in_ranks[i] == 1) {
            straightCount++;
        }
        else if (num_in_ranks[i] == 0 && straightCount != 0) {
            straightCount = 0;
        }
        if (num_in_ranks[i] == 4) {
            four_of_a_kind = true;
        }
        else if (num_in_ranks[i] == 3) {
            three_of_a_kind = true;
        }
        else if (num_in_ranks[i] == 2) {
            pair = true;
        }
    }


    if (straightCount == 5) straight = true;
    printf("\n");

    for (int i = 0; i < SUITS_NUM; i++) {
        if (num_in_suits[i] == 5) {
            flush = true;
        }
    }

    if (straight && flush) {
        straight_flush = true;
    }

}

void print_result() {
    if (four_of_a_kind) {
        printf("Four of a kind\n");
    }
    else if (pair && three_of_a_kind) {
        printf("Full house\n");
    }
    else if (three_of_a_kind) {
        printf("Three of a kind\n");

    }
    else if (pair) {
        printf("Pair\n");

    }
    else if (straight && flush) {
        printf("Straight flush\n");
    }
    else if (straight) {
        printf("Straight\n");
    }
    else if (flush) {
        printf("Flush\n");

    }
    else {

        printf("High card\n");
    }


}