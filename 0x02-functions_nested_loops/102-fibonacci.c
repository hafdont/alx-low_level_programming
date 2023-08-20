#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	unsigned long long int fib1 = 1, fib2 = 2, next;

	printf("%llu, %llu", fib1, fib2);

	for (n = 2; n < 50; n++)
	{
		next = fib1 + fib2;
		printf(", %llu", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}
