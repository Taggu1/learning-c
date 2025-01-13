// Name: c2_project4.c
// Purpose: Testing some math stuff
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int x, resault;

    printf("Enter value for x: ");
    scanf("%d", &x);

    resault = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The resault of the polynomial is : %d\n", resault);
}