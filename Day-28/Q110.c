#include <stdio.h>
#include <string.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank user;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &user.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", user.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &user.balance);

    while (1)
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                user.balance += amount;
                printf("Amount Deposited Successfully.\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if (amount <= user.balance)
                {
                    user.balance -= amount;
                    printf("Amount Withdrawn Successfully.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", user.balance);
                break;

            case 4:
                printf("\n----- Account Details -----\n");
                printf("Account Number : %d\n", user.accNo);
                printf("Account Holder : %s\n", user.name);
                printf("Balance        : %.2f\n", user.balance);
                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}