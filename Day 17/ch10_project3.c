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

int cards[CARDS_COUNT][2];
bool four_of_a_kind = false, full_house = false, three_of_a_kind = false,
flush = false, straight = false;
int pairs = 0;




void read_cards();
void analyze_hand();
void print_result();

int main(void) {



    while (1) {
        for (int i = 0; i < CARDS_COUNT; i++) {
            for (int j = 0; j < 2; j++) {
                cards[i][j] = 0;
            }

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

        cards[count][0] = currentRank;
        cards[count][1] = currentSuit;
        card_exists[currentRank][currentSuit] = true;
        count++;

    }

}


void analyze_hand() {
    int ranks_num[RANKS_NUM];

    for (int i = 0; i < CARDS_COUNT; i++) {
        ranks_num[cards[i][0]]++;
    }

    for (int i = 0; i < CARDS_COUNT - 1; i++) {
        for (int j = 0; j < CARDS_COUNT - 1; j++) {
            int rank = cards[j][0];
            int unit = cards[j][1];
            if (cards[j + 1][0] < rank) {
                cards[j][0] = cards[j + 1][0];
                cards[j][1] = cards[j + 1][1];
                cards[j + 1][0] = rank;
                cards[j + 1][1] = unit;
            }
        }

    }



    int current_rank = cards[0][0];
    straight = true;
    for (int i = 1; i < CARDS_COUNT - 1; i++) {
        if (current_rank + 1 != cards[i][0]) straight = false;
        current_rank = cards[i][0];
    }

    int current_suit = cards[0][1];
    flush = true;
    for (int i = 1; i < CARDS_COUNT - 1; i++) {
        if (current_rank != cards[i][1]) flush = false;
        current_rank = cards[i][1];
    } true;


    int card = 0;

    while (card < CARDS_COUNT) {
        int rank = cards[card][0];
        int run = 0;

        do {
            card++;
            run++;
        } while (card < CARDS_COUNT && cards[card][0] == rank);
        switch (run) {
        case 2: pairs++;break;
        case 3: three_of_a_kind = true; break;
        case 4: four_of_a_kind = true; break;

        }
    }



}

void print_result() {
    if (four_of_a_kind) {
        printf("Four of a kind\n");
    }
    else if (pairs == 1 && three_of_a_kind) {
        printf("Full house\n");
    }
    else if (three_of_a_kind) {
        printf("Three of a kind\n");

    }
    else if (pairs == 2) {
        printf("Two pairs\n");

    }
    else if (pairs == 1) {
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