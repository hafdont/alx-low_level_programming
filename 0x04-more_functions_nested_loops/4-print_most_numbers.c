#include "main.h"

/**
 * main -Entry point 
 *
 * Descripption: A program that prints out numbers 
 * but it leaves out 2 and 4 
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		if(i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
