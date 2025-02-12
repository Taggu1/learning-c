
#include <stdio.h>

#define TITLE_LEN 60
#define AUTHOR_LEN 50
#define DESIGN_LEN 80


// #define SUIT int
// #define CLUBS 0
// #define DIAMONDS 1
// #define HEARTS 1
// #define SPADES 1

union {
    int i;
    double d;
} u = { .d = 12.2 };

typedef struct {
    enum { INT_KIND, DOUBLE_KIND } kind;
    union {
        int i;
        double d;
    } u;

} Number;


struct  catalog_item {
    int stock_number;
    double price;
    int item_type;
    union {
        struct {
            char title[TITLE_LEN + 1];
            char author[AUTHOR_LEN + 1];
            int num_pages;
        } book;
        struct {
            char design[DESIGN_LEN + 1];
        } mug;
        struct {
            char design[DESIGN_LEN + 1];
            int colors;
            int sizes
        } shirt;
    } item;
};

typedef enum { CLUBS, DIAMONDS, HEARTS, SPADES } suit;

struct {
    char a;
    int b;
} c;

int main(void) {
    printf("%d\n", sizeof(c));
}