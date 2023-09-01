#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string with recursion
 * @s: the srtings length to be calculated
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
