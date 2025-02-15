

#include <stdlib.h>
#include <stdio.h>



struct node {
    int data;
    struct node *next;
};

struct node *first = NULL;


struct node *add_to_list(struct node *list, int n);

struct node *read_numbers();

void add_node(int data) {
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    new_node->next = first;
    new_node->data = data;
    first = new_node;
}

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