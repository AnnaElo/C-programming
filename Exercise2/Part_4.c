// Use an enum to represent the days of the week. Write a program that converts 
// a number input by the user to the corresponding day of the week and prints it.

#include <stdio.h>

// Defining enum type for the days of the week
enum DaysOfWeek {
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
    Sunday = 7
};

int main() {
    int dayNumber;

    while (1) {
        // Asking user to insert number between 1 and 7
        printf("Enter a number between 1 and 7: ");
        if (scanf("%d", &dayNumber) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        // Checking if input is within valid range
        if (dayNumber < 1 || dayNumber > 7) {
            printf("Input out of range. Please enter a number between 1 and 7.\n");
            continue;
        }

        // Using a switch-case statement to print the corresponding day of the week
        switch (dayNumber) {
            case Monday:
                printf("Monday\n");
                break;
            case Tuesday:
                printf("Tuesday\n");
                break;
            case Wednesday:
                printf("Wednesday\n");
                break;
            case Thursday:
                printf("Thursday\n");
                break;
            case Friday:
                printf("Friday\n");
                break;
            case Saturday:
                printf("Saturday\n");
                break;
            case Sunday:
                printf("Sunday\n");
                break;
        }

        break; // Exit the loop after valid input
    }

    return 0;
}