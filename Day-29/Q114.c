#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int pos, value, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while(1)
    {
        printf("\n===== Menu Driven Array Operations =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum\n");
        printf("4. Insert Element\n");
        printf("5. Delete Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
            {
                int max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;
            }

            case 4:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                for(i = n; i > pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos] = value;
                n++;

                printf("Element Inserted.\n");
                break;

            case 5:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                for(i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;

                printf("Element Deleted.\n");
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