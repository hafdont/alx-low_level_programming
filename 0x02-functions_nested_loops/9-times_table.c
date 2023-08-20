#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Desxription: The program prints out the multipple table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{

	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
					_putchar('0' + result);
				}
				else
				{
					_putchar('0' + result);
				}

			}
		}
		_putchar('\n');
	}
}
