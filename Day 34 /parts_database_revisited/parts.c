

#include <stdio.h>
#include "parts.h"
#include "utils.h"
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define NAME_LEN 60 // Max  name
#define MAX_PARTS_NUM 100

typedef struct part {
    char *name;
    int number;
    int on_hand;
    struct part *next;
} Part;


Part *parts = NULL;
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



    printf("Enter quantity on hand: ");
    int on_hand = read_int();


    Part *part = malloc(sizeof(Part));


    Part *p = parts;
    for (; p != NULL && p->next != NULL && p->next->number < part_num; p = p->next) {

    }
    if (p != NULL && p->number == part_num) {
        puts("Part is already in the database, can't add it twice");
        return;
    }

    *part = (Part){
       .name = malloc(strlen(part_name)),
       .number = part_num,
       .on_hand = on_hand,
       .next = p,
    };


    strcpy(part->name, part_name);

    parts = part;
}


void search_by_num() {
    printf("Enter part number: ");
    int part_num = read_int();

    for (Part *p = parts; p != NULL && p->number < part_num; p = p->next) {
        if (p->number == part_num) {
            putchar('\n');
            puts("===================================");
            printf("Name: %s\n", p->name);
            printf("Quantity on hand: %d\n", p->on_hand);
            puts("===================================");
            return;
        }
    }


    puts("There's no part with that number");
}

void edit_by_num() {
    printf("Enter part number: ");
    int part_num = read_int();

    for (Part *p = parts; p != NULL && p->number < part_num; p = p->next) {
        if (p->number == part_num) {
            printf("Enter new quantity: ");
            p->on_hand = read_int();
            puts("Quantity edited successfully...");
            return;
        }
    }


    puts("There's no part with that number");
}



void print_parts() {

    for (Part *p = parts; p != NULL; p = p->next) {
        putchar('\n');
        puts("===================================");
        printf("Part %d's information\n", p->number);
        printf("Name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
        puts("===================================");
    }

}

