#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints out lowercase letters in revers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
