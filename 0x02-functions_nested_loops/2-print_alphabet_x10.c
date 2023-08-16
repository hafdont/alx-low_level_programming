#include "main.h"
/**
 * main - Entry point 
 *
 * Decription: A program that prints the alphabets 
 * Ten times 
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		while letter (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
	
}
