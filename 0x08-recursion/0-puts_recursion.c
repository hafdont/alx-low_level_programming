#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - program that prints using recusion
 * @s: the string to be printed
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
