// Name: ch5_project11.c
// Purpose: eleventh project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    int digit1, digit2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &digit1, &digit2);

    printf("You entered the number ");

    if (digit1 == 1) {

        switch (digit2) {
        case 1: printf("eleven");
        case 2: printf("twelve"); break;
        case 3: printf("thirteen"); break;
        case 4: printf("fourteen"); break;
        case 5: printf("fifteen"); break;
        case 6: printf("sixteen"); break;
        case 7: printf("seventeen"); break;
        case 8: printf("eighteen"); break;
        case 9: printf("nineteen"); break;
        }

        printf("\n");

        return 0;
    }


    switch (digit1) {
    case 2: printf("twenty"); break;
    case 3: printf("thirty"); break;
    case 4: printf("fourty"); break;
    case 5: printf("fifty"); break;
    case 6: printf("sixty"); break;
    case 7: printf("seventy"); break;
    case 8: printf("eighty"); break;
    case 9: printf("ninty"); break;
    }
    printf("-");

    switch (digit2) {
    case 1: printf("one"); break;
    case 2: printf("two"); break;
    case 3: printf("three"); break;
    case 4: printf("four"); break;
    case 5: printf("five"); break;
    case 6: printf("six"); break;
    case 7: printf("seven"); break;
    case 8: printf("eight"); break;
    case 9: printf("nine"); break;
    }

    printf("\n");

}