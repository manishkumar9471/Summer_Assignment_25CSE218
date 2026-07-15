#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;
    int choice;
    int availableSeats = 50;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Check Available Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Ticket Number: ");
                scanf("%d", &t.ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t.name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                if (t.seats <= availableSeats)
                {
                    availableSeats -= t.seats;
                    printf("Ticket Booked Successfully.\n");
                }
                else
                {
                    printf("Seats Not Available.\n");
                }
                break;

            case 2:
                printf("\n----- Ticket Details -----\n");
                printf("Ticket Number : %d\n", t.ticketNo);
                printf("Passenger Name: %s\n", t.name);
                printf("Booked Seats  : %d\n", t.seats);
                break;

            case 3:
                printf("Available Seats = %d\n", availableSeats);
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