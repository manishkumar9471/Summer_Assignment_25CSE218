#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp[100];
    int choice, i, len = 0;
    char ch;

    while (1)
    {
        printf("\n===== Menu Driven String Operations =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Copy String\n");
        printf("5. Compare Strings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                printf("Enter String: ");
                gets(str);

                len = 0;
                while (str[len] != '\0')
                    len++;

                printf("Length = %d\n", len);
                break;

            case 2:
                printf("Enter String: ");
                gets(str);

                len = strlen(str);

                for (i = len - 1; i >= 0; i--)
                    printf("%c", str[i]);

                printf("\n");
                break;

            case 3:
                printf("Enter String: ");
                gets(str);

                for (i = 0; str[i] != '\0'; i++)
                {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }

                printf("Uppercase String = %s\n", str);
                break;

            case 4:
                printf("Enter String: ");
                gets(str);

                strcpy(temp, str);

                printf("Copied String = %s\n", temp);
                break;

            case 5:
                printf("Enter First String: ");
                gets(str);

                printf("Enter Second String: ");
                gets(temp);

                if (strcmp(str, temp) == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");

                break;

            case 6:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}