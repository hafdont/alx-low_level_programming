#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - A program that prints the alphabets backwards
 *
 * Description: Print the alphabets backwards
 * starting from 'z' to 'a'
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
