// Name: ch7_project9.c
// Purpose: Ninth project of chapter 7
// Author: Hisham Mohammed

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hours, minutes;
    char character;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &character);

    character = toupper(character);

    if (character == 'P') {
        hours += 12;
    }


    printf("Equivlant 24-hour time: %.2d:%.2d\n", hours <= 24 ? hours : 0, minutes <= 60 ? minutes : 0);

    return 0;
}