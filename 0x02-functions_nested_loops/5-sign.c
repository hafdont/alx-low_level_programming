#include "main.h"

/**
 * print_sign - A prograam that checks ofr the sign of an intege
 *
 * Description: the program compares the integer values to 0
 *a positive and a negative number
 *
 * @n: the variable value to be checked
 *
 * Return: 0 if 0, 1 if postitive and -1 if negativ
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
