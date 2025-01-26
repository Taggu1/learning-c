// Name: ch8_project17.c
// Purpose: Seventeen project of chapter 8
// Author: Hisham Mohammed

#include <stdio.h>


int main(void) {
    int n;

    printf("This program creates a magic square of a specified area.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d",&n);

    int magicSquare[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            magicSquare[i][j] = 0;
        }
        
    }
    

    int currentRow = 0, currentColumn = n/2;

    magicSquare[currentRow][currentColumn] = 1;


    for (int i = 2; i <= n *n; i++)
    {
        int newRow = currentRow - 1 , newColumn = currentColumn + 1;

        

        do
        {
        if (newRow == -1) newRow = n-1;
        if (newColumn == n) newColumn = 0;
        if (magicSquare[newRow][newColumn] != 0) {
            newRow = currentRow + 1;
            newColumn = currentColumn;
        } 
        } while (magicSquare[newRow][newColumn] != 0);
        
        currentRow = newRow;
        currentColumn = newColumn;
        
        magicSquare[currentRow][currentColumn] = i;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d ", magicSquare[i][j]);
        }
        printf("\n");        
    }
    

} 