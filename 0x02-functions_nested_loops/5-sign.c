#include "main.h"

/**
 * main- Entry point 
 *
 * Description 
 *
 * Return"
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_puthcar('+');
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
