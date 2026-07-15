#include <stdio.h>
#include <string.h>

struct Library
{
    int bookId;
    char bookName[50];
    char author[50];
};

int main()
{
    struct Library book[100];
    int n, i, choice, searchId;

    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of books: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("\nBook %d\n", i + 1);

                printf("Enter Book ID: ");
                scanf("%d", &book[i].bookId);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", book[i].bookName);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[i].author);
            }
            break;

        case 2:
            printf("\n----- Book Records -----\n");

            for (i = 0; i < n; i++)
            {
                printf("\nBook %d\n", i + 1);
                printf("Book ID   : %d\n", book[i].bookId);
                printf("Book Name : %s\n", book[i].bookName);
                printf("Author    : %s\n", book[i].author);
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (book[i].bookId == searchId)
                {
                    printf("\nBook Found\n");
                    printf("Book ID   : %d\n", book[i].bookId);
                    printf("Book Name : %s\n", book[i].bookName);
                    printf("Author    : %s\n", book[i].author);
                    break;
                }
            }

            if (i == n)
                printf("Book Not Found\n");

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