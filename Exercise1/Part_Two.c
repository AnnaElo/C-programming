// Write a program that prompts the user to input their age. If the age is less than 13, 
// print "Child", if it's between 13 and 19, print "Teenager", otherwise print "Adult". 
// Ensure to handle input securely.

#include <stdio.h>

int main(void) {
    int age; 

   printf("Please, input your age\n");
   scanf("%d", &age);

    if (age < 13) {
        printf("Child");}
    
    else if (age >= 13 && age <= 19) {
        printf("Teenager");}

    else {
        printf("Adult");}

   return 0;
}