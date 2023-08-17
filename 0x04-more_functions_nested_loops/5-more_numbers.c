#include "main.h" 

/** 
 * main- entry point 
 *
 * Description: A program that prints out 1-14 
 * ten timees 
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		if (j > 9)
		{
			_putchar('0' + j / 10);
		}
		_putchar('0' + j % 10);
	}
	_putchar('0' + j % 10);
}
