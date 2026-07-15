#include <stdio.h>
#include <string.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n = 0, choice, i, searchId;

    while (1)
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf(" %[^\n]", item[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                n++;
                printf("Item Added Successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No Items Available.\n");
                }
                else
                {
                    printf("\n----- Inventory Details -----\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("\nItem %d\n", i + 1);
                        printf("ID       : %d\n", item[i].id);
                        printf("Name     : %s\n", item[i].name);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to Search: ");
                scanf("%d", &searchId);

                for (i = 0; i < n; i++)
                {
                    if (item[i].id == searchId)
                    {
                        printf("\nItem Found\n");
                        printf("ID       : %d\n", item[i].id);
                        printf("Name     : %s\n", item[i].name);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                        break;
                    }
                }

                if (i == n)
                    printf("Item Not Found.\n");

                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}