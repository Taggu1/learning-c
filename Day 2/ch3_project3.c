// Name: ch3_project3.c
// Purpose: Third project of chapter 3
// Author: Hisham Mohammed

#include <stdio.h>

int main(void)
{
    int gsiPrefix, groupIdentifier, publisherCode, itemNumber, chechDigit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsiPrefix, &groupIdentifier, &publisherCode, &itemNumber, &chechDigit);

    printf("GSI prefix: %d\n", gsiPrefix);
    printf("Group identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", chechDigit);

    return 0;
}