
#include <stdio.h>

//#define ENGLISH 1
//#define FRENCH 1
#define SPANISH 1


int main(void) {
#ifdef ENGLISH
    puts("Insert Disk 1");
#elif defined(FRENCH)
    puts("Inserez Le Disque 1");
#elif defined(SPANISH)
    puts("Inserte El Disco 1");
#endif

}