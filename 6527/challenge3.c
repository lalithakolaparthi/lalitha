#include <stdio.h>   // Enables input and output functions

int main()           // Program execution starts here
{
    float num1, num2;   // Variables to store the two numbers
    char op;            // Variable to store the operator

    printf("Enter first number: ");
    scanf("%f", &num1);     // Read first number

    printf("Enter second number: ");
    scanf("%f", &num2);     // Read second number

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);      // Read operator (space avoids newline issue)

    switch(op)              // Switch based on operator
    {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0)                      // Check for division by zero
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                printf("Result: %.2f\n", num1 / num2);
            }
            break;

        default:
            printf("Error: Invalid operator.\n"); // Handles invalid operator
    }

    return 0;   // End of program
}
