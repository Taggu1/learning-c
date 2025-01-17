
// Name: broker.c
// Purpose: Calculating a Broker's Commissi (rewrite)
// Author: Hisham Mohammed

#include <stdio.h>

int main(void) {
    float sharesNum, value, transaction, commision, rivalCommision;

    printf("Enter numner of shares and value of share shares/value: ");
    scanf("%f /%f", &sharesNum, &value);

    transaction = sharesNum * value;

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

    if (sharesNum < 2000) {
        rivalCommision = 33 + 0.03 * sharesNum;
    }
    else {
        rivalCommision = 33 + 0.02 * sharesNum;

    }

    printf("Commission: %.2f\n", commision);
    printf("Rival Commission: %.2f\n", rivalCommision);


}