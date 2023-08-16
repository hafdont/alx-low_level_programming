#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long long int fib1 = 1, fib2 = 2, next;
    unsigned long long int sum = 0;

    while (fib2 <= 4000000)
    {
        if (fib2 % 2 == 0)
            sum += fib2;

        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    printf("%llu\n", sum);

    return (0);
}

