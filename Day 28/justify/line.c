
#include <stdio.h>
#include <string.h>
#include "line.h"
#include <stdbool.h>
#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN + 1];
int line_len = 0;
int num_words = 0;


void clear_line() {
    line[0] = '\0';
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word) {
    if (num_words > 0) {
        line[line_len] = ' ';
        line[line_len + 1] = '\0';
        line_len++;
    }
    strcat(line, word);
    line_len += strlen(word);
    num_words++;
}

int space_remaning(void) {
    return MAX_LINE_LEN - line_len;
}

void write_line(void) {
    int extra_spaces, spaces_to_insert, i, j;

    extra_spaces = MAX_LINE_LEN - line_len;
    bool space_put_at_end = false;

    for (int i = 0; i < line_len; i++) {
        if (line[i] != ' ') putchar(line[i]);
        else {
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
    }

    putchar('\n');
}

void flush_line(void) {
    if (line_len > 0) {
        puts(line);
    }
}