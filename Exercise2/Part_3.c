// Develop a program that asks the user to enter their full name, age, and a floating-point 
// number representing their average grade, then prints this information formatted neatly in a sentence.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char fullName[100]; // Buffer for full name input
    int age;
    float averageGrade;

    // User input for the full name
    printf("Enter your full name: ");
    if (fgets(fullName, sizeof(fullName), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove the newline character from the full name input if needed
    size_t length = 0;
    while (fullName[length] != '\0' && fullName[length] != '\n') {
        length++;
    }
    fullName[length] = '\0'; // Null-terminate the full name

    // User input for their age
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input for age.\n");
        return 1;
    }

    // User input for their average grade
    printf("Enter your average grade: ");
    if (scanf("%f", &averageGrade) != 1) {
        printf("Invalid input for average grade.\n");
        return 1;
    }

    // Output 
    printf("\n");
    printf("%s | %d years old | average grade is %.2f.\n", fullName, age, averageGrade);

    return 0;
}