// Name: ch5_project11.c
// Purpose: eleventh project of chapter 5
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    char *digits1[] = { "eleven","tweleve","thirteen","fourteen",
    "fifteen","sixteen", "seventeen", "eighteen", "nineteen" };
    char *digits2[] = { "twenty", "thirty", "fourty",
     "fifty","sixty","seventy","eighty","ninty" };
    char *digits3[] = { "one", "two", "three",
    "four","five","six","seven","eight","nine" };

    int digit1, digit2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &digit1, &digit2);

    printf("You entered the number ");

    if (digit1 == 1) puts(digits1[digit2 - 1]);
    else printf("%s-%s\n", digits2[digit1 - 2], digits3[digit2 - 1]);




    return 0;

}