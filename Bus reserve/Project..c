#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SEATS 40

typedef struct {
    char name[50];
    int age;
    char contact[15];
    int seatNumber;
} Passenger;

Passenger passengers[MAX_SEATS] = {0};  // Array to store passenger details

// Function prototypes
void checkAvailability();
void bookSeat();
void cancelReservation();
void saveToFile();
void loadFromFile();

int main() {
    int choice;

    // Load existing reservations from file
    loadFromFile();

    do {
        printf("\n--- Bus Reservation System ---\n");
        printf("1. Check Seat Availability\n");
        printf("2. Book Seat\n");
        printf("3. Cancel Reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkAvailability();
                break;
            case 2:
                bookSeat();
                break;
            case 3:
                cancelReservation();
                break;
            case 4:
                saveToFile();
                printf("Exiting... Reservation data saved!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void checkAvailability() {
    printf("\n--- Seat Availability ---\n");
    int i;
    for ( i = 1; i <= MAX_SEATS; i++);
        {
        if (passengers[i - 1].seatNumber == 0)
            printf("Seat %d: Available\n", i);
        else
            printf("Seat %d: Booked\n", i);
        }
}

void bookSeat() {
    int seat;
    printf("\nEnter seat number to book (1-%d): ", MAX_SEATS);
    scanf("%d", &seat);

    if (seat < 1 || seat > MAX_SEATS) {
        printf("Invalid seat number!\n");
        return;
    }

    if (passengers[seat - 1].seatNumber != 0) {
        printf("Seat %d is already booked.\n", seat);
        return;
    }

    printf("Enter passenger name: ");
    scanf("%s", passengers[seat - 1].name);
    printf("Enter age: ");
    scanf("%d", &passengers[seat - 1].age);
    printf("Enter contact number: ");
    scanf("%s", passengers[seat - 1].contact);
    passengers[seat - 1].seatNumber = seat;

    printf("Seat %d successfully booked for %s!\n", seat, passengers[seat - 1].name);
}

void cancelReservation() {
    int seat;
    printf("\nEnter seat number to cancel reservation: ");
    scanf("%d", &seat);

    if (seat < 1 || seat > MAX_SEATS || passengers[seat - 1].seatNumber == 0) {
        printf("Invalid seat number or no reservation found!\n");
        return;
    }

    passengers[seat - 1].seatNumber = 0;  // Reset seat details
    printf("Reservation for seat %d has been canceled.\n", seat);
}

void saveToFile() {
    FILE *file = fopen("reservations.dat", "wb");
    if (file == NULL) {
        printf("Error saving data to file!\n");
        return;
    }
    fwrite(passengers, sizeof(Passenger), MAX_SEATS, file);
    fclose(file);
}

void loadFromFile() {
    FILE *file = fopen("reservations.dat", "rb");
    if (file == NULL) {
        return;  // File not found, start fresh
    }
    fread(passengers, sizeof(Passenger), MAX_SEATS, file);
    fclose(file);
}
