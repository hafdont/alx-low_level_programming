#include "main.h"

/**
 * main -Entry point
 *
 * Description : a progi thats prints a square based on the number of #given
 *
 * Return: Void
 */
void print_square(int size)
{
	int i, j;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i= 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
