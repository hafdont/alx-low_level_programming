#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabets 
 * backwards 
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z' )
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
