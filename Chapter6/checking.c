#include <stdio.h>

int main(void){
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    for (;;){
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd) {
            case 0:
                balance = 0.0f;
                printf("Cleared balance.\n");
                break;
            case 1:
                printf("Enter credit amount: ");
                scanf("%f", &credit);
                balance += credit;
                printf("Added $%.2f to balance.\n", credit);
                break;
            case 2:
                printf("Enter debit amount: ");
                scanf("%f", &debit);
                balance -= debit;
                printf("Subtracted $%.2f from balance.\n", debit);
                break;
            case 3:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid command.\n");
                break;
        }
    }
    return 0;
}
