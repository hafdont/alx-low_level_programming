#include "main.h"
/**
 * print_alphabet_x10 - a program that prints the alphabet ten times
 * in lowercase followed b a new line
 *
 * Decription: A program that prints the alphabets
 * it iterates over the 'i'variable to print the ltters ten times
 * and it iterates over the letters variable from 97 to 123
 * wich are the ASCII equivalent to a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i < 10; i++)
	{
		letter = 97;

		while (letter <= 123)
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}

}
