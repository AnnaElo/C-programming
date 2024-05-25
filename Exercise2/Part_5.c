// Write a program that uses bitwise operators to set, clear, and toggle 'read', 
// 'write', and 'execute' permission flags.

#include <stdio.h>

// Function to print permissions in binary
void printPermissions(char permissions) {
    printf("Permissions (in binary): ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (permissions >> i) & 1);
    }
    printf("\n");
}

// Function to set a permission flag
void setPermission(char *permissions, char flag) {
    *permissions |= flag;
}

// Function to clear a permission flag
void clearPermission(char *permissions, char flag) {
    *permissions &= ~flag;
}

// Function to toggle a permission flag
void togglePermission(char *permissions, char flag) {
    *permissions ^= flag;
}

int main() {
    // Initialize permissions variable with default values
    char permissions = 0b000;

    // Print initial permissions
    printPermissions(permissions);

    // Set 'read' permission
    setPermission(&permissions, 0b100);
    printf("After setting 'read' permission: ");
    printPermissions(permissions);

    // Clear 'write' permission
    clearPermission(&permissions, 0b010);
    printf("After clearing 'write' permission: ");
    printPermissions(permissions);

    // Toggle 'execute' permission
    togglePermission(&permissions, 0b001);
    printf("After toggling 'execute' permission: ");
    printPermissions(permissions);

    return 0;
}