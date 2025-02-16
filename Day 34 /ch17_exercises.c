
#include <stdlib.h>
#include <stdio.h>



void *my_malloc(size_t _size) {
    void *mem = malloc(_size);

    if (mem == NULL) {
        puts("Error malloc couldn't allocate memory");
        exit(EXIT_FAILURE);
    }

    return mem;
}

