// Name: ch6_project4.c
// Purpose: Forth project of chapter 6
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    float transaction, commision;

    while (1) {
        printf("Enter value of trade: ");
        scanf("%f", &transaction);

        if (transaction == 0) {
            break;
        }
        if (transaction < 2500) {
            commision = 30 + transaction * (1.7 / 100);
        }
        else if (transaction < 6250) {
            commision = 56 + transaction * (0.66 / 100);
        }
        else if (transaction < 20000) {
            commision = 76 + transaction * (0.34 / 100);
        }
        else if (transaction < 50000) {
            commision = 100 + transaction * (0.22 / 100);
        }
        else if (transaction < 500000) {
            commision = 155 + transaction * (0.11 / 100);
        }
        else {
            commision = 255 + transaction * (0.09 / 100);
        }

        if (commision < 39) {
            commision = 39;
        }

        printf("Commission: %.2f\n", commision);
    }


}