
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define SIZE 100
#define NAME_LEN 100

// 19
struct {
    char *cmd_name;
    void (*cmd_pointer) (void);
} file_cmd[] = {
    {"new", new_cmd,
    "open", open_cmd,
    "close", close_cmd,
    "close all", close_all_cmd,
    "save", save_cmd,
    "save as", save_as_cmd,
    "save all", save_all_cmd,
    "print", print_cmd,
    "exit", exit_cmd,
},

};

void *new_cmd();
void *open_cmd();
void *close_cmd();
void *close_all_cmd();
void *save_cmd();
void *save_as_cmd();
void *save_all_cmd();
void *print_cmd();
void *exit_cmd();


// 9 
struct {
    int a;
} x;

// 11

struct node {
    int data;
    struct node *next;
};

struct node *first = NULL;

// 4
typedef struct { int x, y; } Point;
typedef struct { Point upper_left, lower_right; } Rectangle;
Rectangle *p;

// 10
typedef struct {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Part;


// 5
struct {
    union {
        char a, b;
        int c;
    } d;
    int e[5];
}f, *p3 = &f;

// 3
void print_array(int *arr, int n);

// 3
int *create_array(int n, int initial_value);

// 2
char *duplicate(char *str);

// 10
void print_part(Part *part);


// 11
int count_occurrences(struct node *list, int n);

// 11
struct node *add_to_list(struct node *list, int n);

// 11
struct node *read_numbers();


// 14
void delete_node(struct node **list, int n);

// 16
int sum(int (*f)(int), int start, int end);

// 17
int compate_ints(const void *i1, const void *i2);

int main(void) {

    // 2
    char *s1 = "This is nice";
    char *s2 = duplicate(s1);
    puts(s2);

    // 3
    int *arr1 = create_array(10, 2);
    print_array(arr1, 10);

    // 4
    p = malloc(sizeof(Rectangle));

    Point p1 = {
        .x = 10,
        .y = 25,
    };

    Point p2 = {
        .x = 20,
        .y = 15,
    };

    p->upper_left = p1;
    p->lower_right = p2;

    // 5
    // p3.b = ' '; 5.a ILLEGAL
    p3->e[3] = 10; // 5.b LEGAL
    (*p3).d.a = '*'; // 5.c LEGAL
    // p3->d->c  5.d ILLEGAL

    // 6 already did it by myself

    // 7, the loop is wrong because it clears the memory before moving forward
    // one solution would be to add a pointer to next before freeing memory

    // 8, done in seperate file.

    // 9, true, becase (->) is * and ., so it will be *(&x).a which is the same as x.a

    // 10
    Part part = {
        .name = "Driver",
            .on_hand = 10,
            .number = 4,
    };
    print_part(&part);

    // 11
    first = read_numbers();
    delete_node(&first, 7);
    printf("number of 7's: %d \n", count_occurrences(first, 7));

    // 17
    int arr[SIZE];

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 101;
    }

    qsort(&arr[50], 50, sizeof(int), compate_ints);


    // Print the array
    printf("Random Numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        if (i == 50) printf("\n\n\n\n");
        printf("%d ", arr[i]);
    }

    printf("\n");

}

// 19
void excute_command(char *command) {
    int len = sizeof(file_cmd) / sizeof(file_cmd[0]);

    for (int i = 0; i < len; i++) {
        if (strcmp(file_cmd[i].cmd_name, command) == 0) {
            file_cmd[i].cmd_pointer();
        }
    }

}

// 17
int compate_ints(const void *i1, const void *i2) {
    int *x = i1;
    int *y = i2;


    return *x - *y;
}

// 16
int sum(int (*g)(int), int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += g(i);
    }

    return sum;

}

// 14
void delete_node(struct node **list, int n) {
    struct node *prev = malloc(sizeof(struct node));
    for (; *list != NULL; *list = (*list)->next) {

        if ((*list)->data == n && prev != NULL) {

            prev->next = (*list)->next;
        }
        prev = *list;
    }
    if (prev == NULL) *list = (*list)->next;
    free(*list);
}

// 13
struct node *insert_into_ordered_list(struct node *list, struct node *new_node) {
    struct node *cur = list, *prev = NULL;
    while (cur->data <= new_node->data && cur != NULL) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;

}

// 12
struct node *find_last(struct node *list, int n) {
    struct node *last = malloc(sizeof(struct node));
    last = NULL;
    while (list != NULL) {
        if (list->data == n) last = list;
        list = list->next;
    }

    return last;

}

// 11
int count_occurrences(struct node *list, int n) {
    int count = 0;
    while (list != NULL) {
        if (list->data == n) count++;
        list = list->next;
    }
    return count;

};

// 11
struct node *read_numbers() {
    struct node *first = NULL;

    int n;

    printf("Enter a series of numbers (0 to terminate): ");

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        first = add_to_list(first, n);
    }
    return first;

}

// 11
struct node *add_to_list(struct node *list, int n) {
    struct node *new_node = malloc(sizeof(struct node));

    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->next = list;
    new_node->data = n;
    return new_node;
}


// 10
void print_part(Part *part) {
    printf("Part number: %d\n", part->number);
    printf("Part name: %s\n", part->name);
    printf("Quantity on hand: %d\n", part->on_hand);
}

// 3
void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}


// 3
int *create_array(int n, int initial_value) {
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {

        arr[i] = initial_value;
    }

    return arr;

}


// 2
char *duplicate(char *str) {
    char *buffer = malloc(strlen(str));

    if (buffer == NULL) {
        return NULL;
    }

    strcpy(buffer, str);

    return buffer;
}


// 1
void *my_malloc(size_t _size) {
    void *mem = malloc(_size);

    if (mem == NULL) {
        puts("Error malloc couldn't allocate memory");
        exit(EXIT_FAILURE);
    }

    return mem;
}

