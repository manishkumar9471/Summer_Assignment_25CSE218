#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount <= balance) {
                balance -= amount;
                printf("Remaining Balance = %.2f", balance);
            } else {
                printf("Insufficient Balance");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}