// Task: Develop a program that asks the user for a number and then prints a menu for the user to choose from: 
// 1) Add 5 to the number, 2) Multiply the number by 5, 3) Subtract 5 from the number, 0) Exit the program. 
// Use a switch for menu selection and loop the menu until the user chooses to exit.

#include <stdio.h>

int main() {
    int number, choice;

    // Asking the user for a number
    printf("Please enter a number: ");
    scanf("%d", &number);

    // Menu loop
    do {
        // Printing the menu
        printf("\nMenu:\n");
        printf("1) Add 5 to the number\n");
        printf("2) Multiply the number by 5\n");
        printf("3) Subtract 5 from the number\n");
        printf("0) Exit the program\n");

        // Asking for the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch case for menu selection
        switch(choice) {
            case 1:
                number += 5;
                printf("Result: %d\n", number);
                break;
            case 2:
                number *= 5;
                printf("Result: %d\n", number);
                break;
            case 3:
                number -= 5;
                printf("Result: %d\n", number);
                break;
            case 0:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    } while (choice != 0); // Loop until the user chooses to exit (choice is 0)

    return 0;
}
