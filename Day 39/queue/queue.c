#include "queue.h"


struct queue_type {
    int first_empty;
    int next_to_remove;
    int num_of_items;
};
