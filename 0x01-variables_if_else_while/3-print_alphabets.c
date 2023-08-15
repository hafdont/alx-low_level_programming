#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints out
 * the alphabet letters in uppercase abd lowercase
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';


	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}
