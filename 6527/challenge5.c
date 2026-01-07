#include <stdio.h>   // Enables printf()

int main()           // Program execution starts here
{
    int i, j;        // Loop control variables

    for (i = 1; i <= 5; i++)        // Outer loop controls rows
    {
        for (j = 1; j <= i; j++)    // Inner loop controls stars per row
        {
            printf("*");            // Print a star
        }
        printf("\n");               // Move to the next line after each row
    }

    return 0;        // End of program
}
