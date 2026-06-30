// Program to develop complete mini project using arrays, strings and functions.
// "Parking Lot" System.


#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COLS 4
#define PLATE_LEN 15

int parkingLot[ROWS][COLS] = {0};                 
char licensePlates[ROWS][COLS][PLATE_LEN] = {""}; 

void displayLot();
void parkCar();
void leaveLot();
void searchCar();

int main() 
{
    int choice;

    printf("=== Welcome to the Smart Parking Management System ===\n");

    while (1) 
    {
        printf("\n--- Main Menu ---\n");
        printf("1. View Parking Lot Status\n");
        printf("2. Park a Car\n");
        printf("3. Checkout / Remove a Car\n");
        printf("4. Find Car Location\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: displayLot();
                break;
            case 2: parkCar(); 
                break;
            case 3: leaveLot(); 
                break;
            case 4: searchCar(); 
                break;
            case 5: 
                printf("Exiting system. Have a great day!\n");
                return 0;
            default: 
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void displayLot() 
{
    printf("\n--- Current Parking Map ([0] = Empty, [1] = Occupied) ---\n");
    printf("     ");
    for (int j = 0; j < COLS; j++) 
    {
        printf("Col %d ", j + 1);
    }
    printf("\n");

    for (int i = 0; i < ROWS; i++) 
    {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < COLS; j++) 
        {
            printf(" [%d]  ", parkingLot[i][j]);
        }
        printf("\n");
    }
}

void parkCar() 
{
    char plate[PLATE_LEN];
    printf("\nEnter car license plate (no spaces): ");
    scanf("%s", plate);

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if (parkingLot[i][j] == 0) 
            {
                parkingLot[i][j] = 1;
                strcpy(licensePlates[i][j], plate);
                printf("Success! Car parked at Row %d, Column %d.\n", i + 1, j + 1);
                return;
            }
        }
    }
    printf("Sorry, the parking lot is completely full!\n");
}

void leaveLot() 
{
    int row, col;
    printf("\nEnter Row and Column to checkout (e.g., 1 2): ");
    scanf("%d %d", &row, &col);

    int r = row - 1;
    int c = col - 1;

    if (r < 0 || r >= ROWS || c < 0 || c >= COLS) 
    {
        printf("Invalid coordinates! Please check the parking map.\n");
        return;
    }

    if (parkingLot[r][c] == 1) 
    {
        printf("Car %s has left Row %d, Column %d.\n", licensePlates[r][c], row, col);
        parkingLot[r][c] = 0;
        strcpy(licensePlates[r][c], "");
    } 
    else 
    {
        printf("That spot is already empty!\n");
    }
}

void searchCar() 
{
    char plate[PLATE_LEN];
    printf("\nEnter the license plate to search: ");
    scanf("%s", plate);

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if (parkingLot[i][j] == 1 && strcmp(licensePlates[i][j], plate) == 0) 
            {
                printf("Car found! Located at Row %d, Column %d.\n", i + 1, j + 1);
                return;
            }
        }
    }
    printf("Car not found in the parking lot.\n");
}