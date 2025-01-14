// Name: ch3_project4.c
// Purpose: Forth project of chapter 4
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int firstChunk, secondChunk, thirdChunk;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &firstChunk, &secondChunk, &thirdChunk);

    printf("You enterd %.3d.%.3d.%-4d\n", firstChunk, secondChunk, thirdChunk);
}