// Name: countdown.c
// Purpose: Printing a Countdown
// Author: Hisham Mohammed

#include <stdio.h>

void print_count(int n) {
    printf("T minus %d and counting\n", n);
}

int main(void) {
    for (int i = 10; i >= 0; i--) {
        print_count(i);
    }

}