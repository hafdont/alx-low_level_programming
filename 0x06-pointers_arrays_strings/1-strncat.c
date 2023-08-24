#include <stdio.h>
#include "main.h"

/**
 * _strncat - Contactnates two strings
 *
 * @dest: pointer to string being contactenate
 * @src: Pointer to string being contacenated
 * @n: limit for the bytes to contactenet
 *
 * Return: Contactenateds string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	if (dest == NULL || src == NULL)

		return (NULL);

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
