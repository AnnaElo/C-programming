// Implement a secured system for entering and displaying a student's details 
// (name, ID, GPA) using a struct. The system should prevent buffer overflow 
// and ensure data integrity.

#include <stdio.h>
#include <stdbool.h>

#define MAX_NAME_LENGTH 50

// Define struct for student details
struct Student {
    char name[MAX_NAME_LENGTH];
    int ID;
    float GPA;
};

// Function to input student's name
void inputName(char *name, size_t size) {
    printf("Enter student's name: ");
    fgets(name, size, stdin);
}

// Function to input student's ID
void inputID(int *ID) {
    while (true) {
        printf("Enter student's ID: ");
        if (scanf("%d", ID) == 1) {
            break; // Valid input
        } else {
            printf("Invalid input for ID. Please enter an integer.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        }
    }
}

// Function to input student's GPA and validate it
void inputGPA(float *GPA) {
    while (true) {
        printf("Enter student's GPA (0.0 - 4.0): ");
        if (scanf("%f", GPA) == 1 && *GPA >= 0.0 && *GPA <= 4.0) {
            break; // Valid input
        } else {
            printf("Invalid input for GPA. GPA must be a floating-point number within the range 0.0 - 4.0.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        }
    }
}

int main() {
    struct Student student;

    // Input student's name
    inputName(student.name, sizeof(student.name));

    // Input student's ID
    inputID(&student.ID);

    // Input and validate student's GPA
    inputGPA(&student.GPA);

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("ID: %d\n", student.ID);
    printf("GPA: %.2f\n", student.GPA);

    return 0;
}