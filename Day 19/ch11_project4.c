#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#define RANKS_NUM 13
#define SUITS_NUM 4
#define CARDS_COUNT 5



void read_cards(int num_in_ranks[],int num_in_suits[]);
void analyze_hand(int num_in_ranks[],int num_in_suits[],bool *four_of_a_kind,bool  *full_house,
    bool *three_of_a_kind,
    bool *flush,bool *straight,int *pairs);
void print_result(bool four_of_a_kind,bool full_house,bool three_of_a_kind,
    bool flush ,bool straight,
    int pairs);

int main(void) {
    int num_in_ranks[RANKS_NUM];
    int num_in_suits[SUITS_NUM];
    bool four_of_a_kind = false, full_house = false, three_of_a_kind = false,
    flush = false, straight = false;
    int pairs = 0;





    while (1) {
        for (int i = 0; i < RANKS_NUM; i++) {
            num_in_ranks[i] = 0;
        }

        for (int i = 0; i < SUITS_NUM; i++) {
            num_in_suits[i] = 0;
        }


        read_cards(num_in_ranks,num_in_suits);
        analyze_hand(num_in_ranks,num_in_suits,&four_of_a_kind,&full_house,&three_of_a_kind,
            &flush ,&straight,
            &pairs);
        print_result( four_of_a_kind,full_house, three_of_a_kind,
            flush , straight,
            pairs);
    }
}

void read_cards(int num_in_ranks[],int num_in_suits[]) {



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


void analyze_hand(int num_in_ranks[],int num_in_suits[],bool *four_of_a_kind,bool  *full_house,
    bool *three_of_a_kind,
    bool *flush,bool *straight, int *pairs) {



    int straightCount = 0;
    for (int i = 0; i < RANKS_NUM; i++) {
        if (num_in_ranks[i] == 1) {
            straightCount++;
        }
        else if (num_in_ranks[i] == 0 && straightCount != 0) {
            straightCount = 0;
        }
        if (num_in_ranks[i] == 4) {
            *four_of_a_kind = true;
        }
        else if (num_in_ranks[i] == 3) {
            *three_of_a_kind = true;
        }
        else if (num_in_ranks[i] == 2) {
            *pairs++;
        }
    }


    if (straightCount == 5) *straight = true;
    printf("\n");

    for (int i = 0; i < SUITS_NUM; i++) {
        if (num_in_suits[i] == 5) {
            *flush = true;
        }
    }


}

void print_result(bool four_of_a_kind,bool full_house,bool three_of_a_kind,
    bool flush ,bool straight,
    int pairs) {
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