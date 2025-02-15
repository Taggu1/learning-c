
#include <stdio.h>
#include <ctype.h>
#include "parts.h"

void print_starting_message();
void start_app();


int main(void) {
    print_starting_message();
    start_app();

    return 0;
}

void print_starting_message() {
    puts("Welcome to your database");
    puts("Here's an outline of the operations you can do");
    puts("i: (to insert a new part)");
    puts("s: (to search for a part by number)");
    puts("u: (to update an existing part)");
    puts("p: (to print all parts)");
    puts("q: (to quit)");
}

void start_app() {

    Part parts[MAX_PARTS_NUM];
    int parts_count = 0;


    char operation;
    for (;;) {
        printf("\nEnter operation code: ");
        operation = (char)getchar();
        while (getchar() != '\n'); // Removes additional letters that the usinger might enter

        switch (tolower(operation)) {
            case 'i': insert_part(&parts_count, parts); break; // TODO: function call
            case 's': search_by_num(parts_count, parts); break;
            case 'u': edit_by_num(parts_count, parts); break;
            case 'p': print_parts(parts_count, parts);  break;
            case 'q': return;
            default: puts("Invalid operation, please try again"); continue; break;
        }
    }
}