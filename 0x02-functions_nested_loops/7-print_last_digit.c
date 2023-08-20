#include "main.h"

/**
 * print_last_digit - a program that prints the last digit of integer
 *
 * Description: the program check for the last digit and prints it
 *
 * @n: the alue being checked
 *
 * Return: 'lasti_digit' as the return value (Succes)
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;
	last_digit = n % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
