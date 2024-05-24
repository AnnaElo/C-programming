// Implement a program that declares two integer variables and two pointer variables. 
// Assign the addresses of the integer variables to the pointer variables, and demonstrate 
// the use of the pointers to read and modify the integer variables.

#include <stdio.h>

int main() {
    // Declaring integer & pointer variables
    int num1 = 1;
    int num2 = 2;
    int *ptr1;
    int *ptr2;

    // Assigning addresses to the pointer variables
    ptr1 = &num1;
    ptr2 = &num2;

    // Printing the addresses while using pointers and reading the values
    printf("Address of num1: %p\n", (void*)ptr1);
    printf("Address of num2: %p\n", (void*)ptr2);

    printf("Value of num1: %d\n", *ptr1);
    printf("Value of num2: %d\n", *ptr2);

    // Using pointers when changing integer values
    *ptr1 = 10;
    *ptr2 = 20;

    // Printing new values of the integers
    printf("New value of num1: %d\n", num1);
    printf("New value of num2: %d\n", num2);

    // Demonstrating the use of the & operator and the dereference operator *
    printf("Address of num1 using &: %p\n", (void*)&num1);
    printf("Value of num1 using dereference *: %d\n", *(&num1));
    printf("Address of num2 using &: %p\n", (void*)&num2);
    printf("Value of num2 using dereference *: %d\n", *(&num2));

    return 0;
}