

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char *planets[] = { "mercury", "venus","earth",
                       "mars","jupiter","saturn",
                       "uranus","neptune","pluto" };


    for (int i = 1; i < argc; i++) {
        bool is_planet = false;
        int planet_num = 0;

        for (int v = 0; v < strlen(argv[i]); v++) {
            argv[i][v] = tolower(argv[i][v]);
        }


        for (int j = 0; j < 9; j++) {
            if (strcmp(planets[j], argv[i]) == 0) {
                is_planet = true;
                planet_num = j + 1;
            }
        }

        if (is_planet) {
            printf("%s is planet %d\n", argv[i], planet_num);
        } else {
            printf("%s is not a planet\n", argv[i]);
        }


    }

    return 0;
}