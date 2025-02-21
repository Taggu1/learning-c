#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;
typedef struct queue_type *Queue;

void insert(Queue q);
Item remove(Queue q);
Item return_first(const Queue q);
Item return_last(const Queue q);
bool is_empty(const Queue q);
Queue create(void);
void destroy(Queue q);

#endif