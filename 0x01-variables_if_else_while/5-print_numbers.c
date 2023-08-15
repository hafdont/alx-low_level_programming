#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints out the ten numbers
 * in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar (number + '0');
		number++;
	}

	putchar('\n');
	return (0);
}
