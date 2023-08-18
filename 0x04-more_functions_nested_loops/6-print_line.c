#include "main.h"

/**
 * main- Entry poin
 *
 * DEscription: ni a program that prints the __
 * in the terminal n number of times
 *
 *
 * Return: Always 0 (Succes, void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n;  i++)
		{
		       	_putchar('_');
		}
		_putchar('\n');
	}
}
