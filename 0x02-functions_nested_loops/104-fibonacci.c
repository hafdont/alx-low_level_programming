#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int fib1 = 1, fib2 = 2, next;
    int count = 2; // Starting with 2, as 1 and 2 are already known

    printf("%lu, %lu", fib1, fib2);

    while (count < 98)
    {
        next = fib1 + fib2;
        printf(", %lu", next);

        fib1 = fib2;
        fib2 = next;
        count++;
    }

    printf("\n");

    return (0);
}

