#include <stdio.h>
#include "main.h"
/**
 * *_strcat - printsout contsntnated strings
 *
 * @dest: string to be contactenated
 * @src: string tobe contaneted
 *
 * Return: Void
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	if (dest == NULL || src == NULL)
		return (NULL);

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
