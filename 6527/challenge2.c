#include <stdio.h>   // Allows use of printf() and scanf()

int main()           // Program execution starts here
{
    char name[50];   // Variable to store the user's name
    int age;         // Variable to store the user's age
    float salary;    // Variable to store the user's salary

    printf("Enter your name: ");     // Ask for name
    scanf("%s", name);               // Read name (string)

    printf("Enter your age: ");      // Ask for age
    scanf("%d", &age);               // Read age (integer)

    printf("Enter your salary: ");   // Ask for salary
    scanf("%f", &salary);            // Read salary (float)

    printf("\n--- User Details ---\n"); // Header for output
    printf("Name: %s\n", name);         // Print name
    printf("Age: %d\n", age);           // Print age
    printf("Salary: %.2f\n", salary);   // Print salary (2 decimal places)

    return 0;        // End of program
}
