// Create a program that defines three functions: one to add two numbers, one to 
// multiply two numbers, and one to subtract two numbers. The main function should 
// ask the user which operation they want to perform and then call the appropriate function.

#include <stdio.h>

// Function declarations 
int add(int num1, int num2);
int multiply(int num1, int num2);
int subtract(int num1, int num2);

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

// Function to multiply two numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Function to subtract two numbers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// Main loop to execute the program 
int main() {
    int number1, number2, choice;

    printf("Please enter the first number: ");
    scanf("%d", &number1);

    printf("Please enter the second number: ");
    scanf("%d", &number2);

    // Menu loop
    do {
        // Printing the menu
        printf("\nMenu:\n");
        printf("1) Adding the two numbers\n");
        printf("2) Multiplying the two numbers\n");
        printf("3) Subtracting the two numbers\n");
        printf("0) Exit the program\n");

        // Asking for the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch case for menu selection
        switch(choice) {
            case 1:
                printf("Result: %d\n", add(number1, number2));
                break;
            case 2:
                printf("Result: %d\n", multiply(number1, number2));
                break;
            case 3:
                printf("Result: %d\n", subtract(number1, number2));
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