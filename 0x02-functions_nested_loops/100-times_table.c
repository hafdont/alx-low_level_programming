#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int j, k, op;

	if (n >= 0 && n <= 15)
	{
	for (j = 0; j <= n; j++)
	{
	_putchar(48);
	for (k = 1; k <= n; k++)
	{
		op = j * k;
		_putchar(44);
		_putchar(32);
		if (op <= 9)
		{
		_putchar(32);
		_putchar(32);
		_putchar(op + 48);
		}
		else if (op <= 99)
		{
		_putchar(32);
		_putchar((op / 10) + 48);
		_putchar((op % 10) + 48);
		}
		else
		{
		_putchar(((op / 100) % 10) + 48);
		_putchar(((op / 10) % 10) + 48);
		_putchar((op % 10) + 48);
		}
	}
	_putchar('\n');
	}
	}
}
