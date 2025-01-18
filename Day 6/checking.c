// Name: checking.c
// Purpose: ACME c h e c k b o o k - b a l a n c i n g program 
// Author: Hisham Mohammed

#include <stdio.h>


int main(void) {
    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    int command;
    float balance;

    for (;;) {
        printf("Enter a command: ");
        scanf("%d", &command);

        switch (command) {
        case 0: balance = 0; break;
        case 1:
            printf("Enter amount of credit: ");
            float credit;
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter amount of debit: ");
            float debit;
            scanf("%f", &debit);

            if (balance - debit >= 0) {
                balance -= debit;
            }
            else {
                printf("insufficient balance.\n");
            }
            break;
        case 3:
            printf("Current balance: $%.2d\n", balance);
            break;
        case 4:
            return 0;
        default:
            printf("Invalid command, please try again\n");
            break;
        }
    }


}