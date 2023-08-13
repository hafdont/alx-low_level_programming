#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints out
 * the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
