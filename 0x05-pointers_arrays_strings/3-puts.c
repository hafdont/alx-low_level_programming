#include "main.h"

/**
 * _puts - a function that printss a string
 *
 * @str: the variable string that will be printed
 *
 * Description: the function uses the numm emulator
 * calculatoor to print the values of the string
 *
 * Return: Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
