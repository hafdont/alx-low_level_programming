#include "main.h"

/**
 * _strlen: this function returns the length of a string
 *
 * Description: This functiin works by increasing the pointer untill
 * it reaches the null terminator
 *
 * @s: the variable whse length is calculated
 *
 * Return: Void
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
