#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A progi that print numbers in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
