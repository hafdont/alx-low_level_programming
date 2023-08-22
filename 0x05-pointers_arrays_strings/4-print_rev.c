#include "main.h"

/**
 * print_rev - a function  that print a string in reverse
 *
 * @s: the string variable being printed
 *
 * Description: we use the null emulator t calculate
 * the values of the string variable then print out in reverse
 *
 * Return: Void
 */
void print_rev(char *s)
{
	char *p;

	p = s;

	while (*s != '\0')
	{
		s++;
	}
	for (s = (s - 1) ; s >= p ; --s)
	{
		_putchar(*s);
	}
	_putchar(10);
}
