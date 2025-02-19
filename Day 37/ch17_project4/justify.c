

#include "line.h"
#include "word.h"


int main(void) {
    char word[MAX_WORD_LEN];
    int word_len;

    clear_line();
    while (1) {
        word_len = read_word(word, MAX_WORD_LEN + 1);
        if (word_len == 0) {
            flush_line();
            return 0;
        }
        if (word_len + 1 > space_remaning()) {
            write_line();
            clear_line();
        }
        add_word(word);
    }

}