#include "main.h"

/**
 * puts2 - function that prints ut every character individually
 *
 * @str: the variable that hlds the string to be printed
 *
 * Description: we again use the nul emulator t calculate the
 * string then print ut every value in it
 *
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
