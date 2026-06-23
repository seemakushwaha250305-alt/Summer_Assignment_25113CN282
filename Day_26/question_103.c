
#include <stdio.h>

int main() {
    float accountBalance = 5000.0;
    int selectionChoice;
    float transferAmt;

    while(1) {
        printf("\n--- ATM Interface System ---\n");
        printf("1. Balance Inquiry\n2. Capital Deposit\n3. Cash Withdrawal\n4. Exit Terminal\n");
        printf("Select functional index option: ");
        scanf("%d", &selectionChoice);

        switch(selectionChoice) {
            case 1:
                printf("Current available balance state: $%.2f\n", accountBalance);
                break;
            case 2:
                printf("Specify deposit value amount: ");
                scanf("%f", &transferAmt);
                accountBalance += transferAmt;
                printf("Deposit processed successfully.\n");
                break;
            case 3:
                printf("Specify cash withdrawal value: ");
                scanf("%f", &transferAmt);
                if(transferAmt > accountBalance) {
                    printf("Declined: Insufficient account funding profile.\n");
                } else {
                    accountBalance -= transferAmt;
                    printf("Withdrawal verified successfully.\n");
                }
                break;
            case 4:
                printf("Terminating session. Securely remove card.\n");
                return 0;
            default:
                printf("Invalid instruction choice index. Resetting options.\n");
        }
    }
}