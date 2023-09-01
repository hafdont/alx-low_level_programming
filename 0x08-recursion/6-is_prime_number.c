#include <stdio.h>
#include "main.h"


/**
 * is_prime_recursive - helper functione
 * @n: the number being checked whether its prime
 * @i: the divisor
 * Return: 1if the number is prime, 0 if its not
 */

int is_prime_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - checks whether if a number is prime with recursion
 * @n: the input
 * Return: 1 if number is prime, o if its not
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
