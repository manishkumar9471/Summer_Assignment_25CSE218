#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int *n)
{
    printf("Enter Roll Number: ");
    scanf("%d", &s[*n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[*n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[*n].marks);

    (*n)++;
    printf("Student Added Successfully.\n");
}

void displayStudents(struct Student s[], int n)
{
    int i;

    if (n == 0)
    {
        printf("No Student Records Found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}

void searchStudent(struct Student s[], int n)
{
    int roll, i;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Student Not Found.\n");
}

int main()
{
    struct Student s[100];
    int n = 0, choice;

    while (1)
    {
        printf("\n===== Student Management Mini Project =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent(s, &n);
                break;

            case 2:
                displayStudents(s, n);
                break;

            case 3:
                searchStudent(s, n);
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