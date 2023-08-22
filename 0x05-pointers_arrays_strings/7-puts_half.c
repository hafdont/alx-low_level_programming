#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half a string
 *
 * @str : pointers to the string
 * Reurn: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
