// Implement a secured system for entering and displaying a student's details 
// (name, ID, GPA) using a struct. The system should prevent buffer overflow 
// and ensure data integrity.

#include <stdio.h>

#define MAX_NAME_LENGTH 50

// Define struct for student details
struct Student {
    char name[MAX_NAME_LENGTH];
    int ID;
    float GPA;
};

int main() {
    struct Student student;

    // Input student's name
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);

    // Input student's ID
    printf("Enter student's ID: ");
    if (scanf("%d", &student.ID) != 1) {
        printf("Invalid input for ID. Try again\n");
        return 1;
    }

    // Input and validate student's GPA
    printf("Enter student's GPA (0.0 - 4.0): ");
    if (scanf("%f", &student.GPA) != 1 || student.GPA < 0.0 || student.GPA > 4.0) {
        printf("Invalid input for GPA. GPA must be a floating-point number within the range 0.0 - 4.0.\n");
        return 1;
    }

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("ID: %d\n", student.ID);
    printf("GPA: %.2f\n", student.GPA);

    return 0;
}