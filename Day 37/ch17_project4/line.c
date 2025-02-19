
#include <stdio.h>
#include <string.h>
#include "line.h"
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LINE_LEN 60

typedef struct node {
    char *data;
    struct node *next;
} Node;


Node *line = NULL;
int line_len = 0;
int num_words = 0;


void clear_line() {
    line_len = 0;
    num_words = 0;

    while (line != NULL) {
        Node *temp = line;
        line = line->next;
        free(temp);
    }

}

void add_word(const char *word) {
    Node *new_word = malloc(sizeof(Node));
    *new_word = (Node){
        .data = word,
        .next = line
    };
    line = new_word;
    num_words++;
}

int space_remaning(void) {
    return MAX_LINE_LEN - line_len;
}

void write_line(void) {
    int extra_spaces, spaces_to_insert, i, j;

    extra_spaces = MAX_LINE_LEN - line_len;
    bool space_put_at_end = false;

    for (Node *p = line; p != NULL; p = p->next) {
        printf("%s", p->data);
        if (!space_put_at_end) {
            spaces_to_insert = extra_spaces / (num_words - 1);
        } {
            spaces_to_insert = extra_spaces % (num_words - 1);
        }
        space_put_at_end = !space_put_at_end;
        for (int j = 0; j < spaces_to_insert; j++) {
            putchar(' ');
        }
        extra_spaces -= spaces_to_insert;
        num_words--;
    }

    putchar('\n');
}

void flush_line(void) {
    for (Node *p = line; p != NULL; p = p->next) {
        printf("%s ", p->data);
    }
    printf("\n");
}