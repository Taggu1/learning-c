
#include <stdio.h>
#include <string.h>

#define NAME_LEN 60
#define FIRST_NAME_LEN 60
#define LAST_NAME_LEN 50

typedef struct {
    char first[FIRST_NAME_LEN + 1];
    char middle_initial;
    char last[LAST_NAME_LEN + 1];
} PersonName;


typedef struct {
    PersonName name;
    int id, age;
    char gender;
} Student;



typedef struct {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Part;

struct {
    char name[NAME_LEN + 1];
    int number;
    char gender;
} employee1, employee2;

typedef struct {
    char *country;
    int code;
} DialingCode;

void print_part(Part part);
Part build_part(int number, char *name, int on_hand);



int main(void) {
    // Part part1 = {
    //     .name = "Hard drive",
    //     .number = 200,
    //     .on_hand = 10,
    // };

    

    Student student1 = {
        .name = {
            .first = "Hisham",
            .middle_initial = 'H',
            .last = "Rashad"
        },
        .age = 18,
        .gender = 'm',
        .id = 200,
    };


    Part part1 = build_part(200, "Hard drive", 10);
    Part part2 = build_part(100, "Car", 1);

    Part parts[] = { part1,part2 };

    // print_part(part1);

    // print_part((Part) { 528, "Hard drive", 12 });

    print_part(parts[1]);
}

void print_part(Part part) {
    printf("Part number: %d\n", part.number);
    printf("Part name: %s\n", part.name);
    printf("Quantity on hand: %d\n", part.on_hand);
}

Part build_part(int number, char *name, int on_hand) {
    Part part;


    part.number = number;
    strcpy(part.name, name);
    part.on_hand = on_hand;
    return part;
}