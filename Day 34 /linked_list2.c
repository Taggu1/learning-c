

#include <stdlib.h>
#include <stdio.h>



struct node {
    int data;
    struct node *next;
};

struct node *first = NULL;


struct node *add_to_list(struct node *list, int n);

struct node *read_numbers();


int main(void) {


    struct node *list = read_numbers();


    for (struct node *p = list; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");


}

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

struct node *search_list(struct node *list, int n) {

    for (struct node *p = list; p != NULL; p = p->next) {
        if (p->data == n) return p;
    }
    return NULL;
}

struct node *delete_node(struct node *list, int n) {
    struct node *prev;
    struct node *cur = list;
    for (; cur != NULL; cur = cur->next) {

        if (cur->data == n && prev != NULL) {
            prev->next = cur->next;
            return list;
        }
        prev = cur;
    }
    if (prev == NULL) list = list->next;
    free(cur);
    return list;
}