// Name: ch8_project1.c
// Purpose: First project of chapter 8
// Author: Hisham Mohammed

#include <stdbool.h>
#include <stdio.h>

#define N 10

int main(void) {
    int digitSeen[N] = { false };
    int digitRepeated[N] = { false };
    int number, repCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        int currentDigit = number % 10;
        if (digitSeen[currentDigit]) {
            repCount++;
            digitRepeated[currentDigit] = true;
        }
        else {
            digitSeen[currentDigit] = true;
        }
        number /= 10;
    } while (number != 0);

    if (repCount > 0) {
        printf("Repeated digit(s): ");

        for (int i = 0; i < N; i++) {
            if (digitRepeated[i]) printf("%d ", i);
        }
        printf("\n");
        return 0;
    }

    printf("No repeated digit\n");
}