// Write a program that prompts the user to input their age. If the age is less than 13, 
// print "Child", if it's between 13 and 19, print "Teenager", otherwise print "Adult". 
// Ensure to handle input securely.

#include <stdio.h>

int main(void) {
    int age;

    printf("Please, input your age\n");

    // Reading the value and determining is it in the correct form
    while (scanf("%d", &age) != 1) {
        fprintf(stderr, "Error: Your input needs to be in numerical value. Please try again.\n");
        // Clear the input line for the next try
        while (getchar() != '\n');
    }

    if (age < 13) {
        printf("Child\n");

    } else if (age >= 13 && age <= 19) {
        printf("Teenager\n");
        
    } else {
        printf("Adult\n");
    }

    return 0; 
}