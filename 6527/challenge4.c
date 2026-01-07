#include <stdio.h>   // Enables input and output functions

int main()           // Program execution starts here
{
    int num, i;
    int isPrime = 1;     // Flag variable to track prime status

    printf("Enter a number: ");
    scanf("%d", &num);   // Read the number

    /* Check if number is positive, negative, or zero */
    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    /* Check if number is even or odd */
    if (num != 0)
    {
        if (num % 2 == 0)
            printf("The number is Even.\n");
        else
            printf("The number is Odd.\n");
    }

    /* Check if number is prime */
    if (num <= 1)
    {
        isPrime = 0;     // Numbers <= 1 are not prime
    }
    else
    {
        for (i = 2; i <= num / 2; i++)   // Loop to check divisibility
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;  // Exit loop if divisor found
            }
        }
    }

    if (isPrime)
        printf("The number is Prime.\n");
    else
        printf("The number is Not Prime.\n");

    return 0;   // End of program
}
