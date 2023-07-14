#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and prints whether
 *              it is positive, zero, or negative.
 *
 * Return: 0 (indicating successful execution)
 */
int main(void)
{
    srand(time(0));  // Seed the random number generator with current time
    int n = rand() % (2 * RAND_MAX) - RAND_MAX;  // Generate a random number and assign it to n

    printf("The number %d ", n);

    // Check the value of n and print the corresponding message
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return 0;  // Indicate successful execution
}
