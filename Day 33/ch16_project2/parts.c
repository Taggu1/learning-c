

#include <stdio.h>
#include "parts.h"
#include "utils.h"
#include <string.h>
#include <stdbool.h>

#define NAME_LEN 60 // Max part name
#define MAX_PARTS_NUM 100

typedef struct {
    char name[NAME_LEN + 1]; // (+1) to account for the null character
    int number;
    int on_hand;
} Part;


bool part_in_database(int part_num, char *part_name);


Part parts[MAX_PARTS_NUM];
int parts_count = 0;

void insert_part() {
    // Check if database is full

    if (parts_count == MAX_PARTS_NUM) {
        puts("The inventory is full, you can't add more parts");
        return;
    }

    printf("Enter part number: ");
    int part_num = read_int();

    printf("Enter part name: ");
    char part_name[NAME_LEN];
    read_string(part_name, NAME_LEN);

    if (part_in_database(part_num, part_name)) {
        puts("Part is already in the database, can't add it twice");
        return;
    }


    printf("Enter quantity on hand: ");
    int on_hand = read_int();

    Part part = {
        .name = "",
        .number = part_num,
        .on_hand = on_hand,
    };



    strcpy(part.name, part_name);
    parts[parts_count++] = part;
}


void search_by_num() {
    printf("Enter part number: ");
    int part_num = read_int();
    for (int part_index = 0; part_index < parts_count; part_index++) {
        if (part_num == parts[part_index].number) {
            putchar('\n');
            puts("===================================");
            printf("Name: %s\n", parts[part_index].name);
            printf("Quantity on hand: %d\n", parts[part_index].on_hand);
            puts("===================================");
            return;
        }
    }

    puts("There's no part with that number");
}

void edit_by_num() {
    printf("Enter part number: ");
    int part_num = read_int();
    for (int part_index = 0; part_index < parts_count; part_index++) {
        if (part_num == parts[part_index].number) {
            printf("Enter new quantity: ");
            parts[part_index].on_hand = read_int();
            puts("Quantity edited successfully...");
            return;
        }
    }

    puts("There's no part with that number");
}



void print_parts() {

    for (int i = 0; i < parts_count; i++) {
        for (int j = i; j < parts_count; j++) {
            if (parts[j].number < parts[i].number) {
                Part temp = parts[j];
                parts[j] = parts[i];
                parts[i] = temp;
            }
        }

    }



    for (int part_index = 0; part_index < parts_count; part_index++) {

        Part current_part = parts[part_index];
        int part_id = part_index + 1;

        putchar('\n');
        puts("===================================");
        printf("Part %d's information\n", part_id);
        printf("Name: %s\n", parts[part_index].name);
        printf("Number: %d\n", current_part.number);
        printf("Quantity on hand: %d\n", current_part.on_hand);
        puts("===================================");
    }

}

bool part_in_database(int part_num, char *part_name) {
    for (int i = 0; i < parts_count; i++) {
        if (part_num == parts[i].number || strcmp(part_name, parts[i].name) == 0) {
            return true;
        }
    }

    return false;

}