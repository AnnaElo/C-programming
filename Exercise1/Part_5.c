// Write a program that declares an array of 10 integers. Fill the array with the first 
// 10 positive even numbers. Then, implement functionality to print the array, reverse 
// the array, and then print the reversed array.

#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Please enter 10 positive numbers:\n");

    // Loop to input 10 numbers
    for (i = 0; i < 10; i++) {
        do {
            printf("Number %d: ", i + 1);
            scanf("%d", &numbers[i]);
            if (numbers[i] <= 0) {
                printf("Please enter a positive number.\n");
            }
        } while (numbers[i] <= 0);
    }

    // Displaying the entered numbers
    printf("\nThe numbers you entered are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

     printf("\n");
     
    // Displaying the entered numbers in reverse order
    printf("\nThe numbers you entered in reversed order are:\n");
    for (int i = 10 - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}