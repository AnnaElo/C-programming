// Create a program that prints a welcome message, and then asks the user to enter 
// three integers. After the user enters the integers, the program should print them 
// back to the console.

#include <stdio.h>

int main() {
    printf("Hello, World!\n"); /*in printf you need newline character "\n" to the end of the output*/
    puts("My name is Sith Lord."); /*in puts you don't need "\n"*/

    int integer1, integer2, integer3;
    
    printf("Please enter three integers separated by spaces: ");

    scanf("%d %d %d", &integer1, &integer2, &integer3);
    
    printf("You entered: %d, %d, %d\n", integer1, integer2, integer3);
    
    return 0;
}