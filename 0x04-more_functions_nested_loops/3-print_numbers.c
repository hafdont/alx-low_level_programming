#include "main.h"

/**
 * main - Entry point 
 *
 * Description: A program that prints numbers 0 t0 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i; 
	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}
