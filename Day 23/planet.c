

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *planets[] = { "Mercury", "Venus","Earth",
                       "Mars","Jupiter","Saturn",
                       "Uranus","Neptune","Pluto" };


    for (int i = 1; i < argc; i++) {
        bool is_planet = false;
        int planet_num = 0;

        for (int j = 0; j < 9; j++) {
            if (strcmp(planets[j], argv[i]) == 0) {
                is_planet = true;
                planet_num = i + 1;
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