// Create a dynamic string using pointers and heap allocation with malloc. 
// Implement a function to copy one string into another, without using the 
// standard library functions.

#include <stdio.h>
#include <stdlib.h> // Contains: malloc, calloc, free & realloc operations

// Creating function to copy one string into another
void copyString(char *destination, const char *source) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Null-terminate the destination string
}

int main() {
    char input[100]; // Temporary buffer for input
    char *dynamicString1;
    char *dynamicString2;
    size_t length = 0;

    // Prompt the user for a string input
    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Check if the input is empty or just contains a newline character
    if (input[0] == '\n' || input[0] == '\0') {
        printf("Input must not be empty.\n");
        return 1;
    }

    // Remove the newline character from the input string if present
    while (input[length] != '\0' && input[length] != '\n') {
        length++;
    }
    input[length] = '\0'; // Null-terminate the input string

    // Use malloc to dynamically allocate space for the string
    dynamicString1 = (char*)malloc((length + 1) * sizeof(char)); // +1 for the null terminator
    if (dynamicString1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Copy input string to dynamicString1
    copyString(dynamicString1, input);

    // Allocate memory for dynamicString2
    dynamicString2 = (char*)malloc((length + 1) * sizeof(char)); // +1 for the null terminator
    if (dynamicString2 == NULL) {
        printf("Memory allocation failed\n");
        free(dynamicString1); // Free the previously allocated memory
        return 1;
    }

    // Copy the string to another pointer using custom function
    copyString(dynamicString2, dynamicString1);

    // Print both strings to verify the copy
    printf("Original string: %s\n", dynamicString1);
    printf("Copied string: %s\n", dynamicString2);

    // Free the allocated memory after the operation
    free(dynamicString1);
    free(dynamicString2);

    return 0;
}