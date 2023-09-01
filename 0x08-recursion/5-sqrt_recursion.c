#include "main.h"
#include <stdio.h>

int find_sqrt(int n, int j);

/**
 * _sqrt_recursion - Calculates the sqrt of a number
 * @n: the input number
 * Return: The natural sqrt of a no.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}

/**
 * find_sqrt - helper function for sqrt recusive
 * @n: the input number.
 * @j: the limitor
 * Return: the natural sqrt of the number
 */

int find_sqrt(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (find_sqrt(n, j + 1));
}
