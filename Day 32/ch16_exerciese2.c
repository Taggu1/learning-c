
#include <stdio.h>

// 19
#define NAM_LEN 40

typedef enum weekdays /*15.a*/ {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDENSDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Weekdays /*15.b*/;

// 17
enum { FALSE, TRUE } b;
int i;

// 18.a
typedef enum {
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING,
    EMPTY
} Piece;

typedef enum { BLACK, WHITE } Color;

// 18.b
typedef struct {
    Piece piece;
    Color color;
} Square;


// 19
struct pinball_machine {
    char name[NAM_LEN + 1];
    int year;
    enum { EM, SS } type;
    int players;
};

// 20
enum { NORTH, SOUTH, EAST, WEST } direction;


// 21.a
enum { NUL /*0*/, SOH /*1*/, STX /*2*/, ETX /*3*/ };
// 21.b
enum { VT = 11 /*11*/, FF /*12*/, CR /*13*/ };
// 21.c
enum { SO = 14 /*14*/, ST /*15*/, DLE /*16*/, CAN = 24 /*24*/, EM /*25*/ };
// 21.d
enum { ENQ = 45 };

int main(void) {
    b = FALSE; // LEGAL,SAFE
    b = i; // NOT SAFE
    b++; // NOT SAFE 
    i = b; // SAFE, LEGAL
    i = 2 * b + 1; // SAFE, LEGAL


    Square board[8][8];

    Piece backRank[8] = { ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK };

    // Initialize empty squares
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j].piece = EMPTY;
            board[i][j].color = BLACK;
        }
    }

    // Set pawns
    for (int j = 0; j < 8; j++) {
        board[1][j].piece = PAWN;
        board[1][j].color = WHITE;
        board[6][j].piece = PAWN;
        board[6][j].color = BLACK;
    }

    // Set back rank pieces
    for (int j = 0; j < 8; j++) {
        board[0][j].piece = backRank[j];
        board[0][j].color = WHITE;
        board[7][j].piece = backRank[j];
        board[7][j].color = BLACK;
    }

    // 20
    int x, y;

    switch (direction) {
        case NORTH: y -= 1; break;
        case SOUTH: y += 1; break;
        case WEST: x -= 1;  break;
        case EAST: x += 1; break;

        default:
            break;
    }

    printf("%d\n", FF);
}

