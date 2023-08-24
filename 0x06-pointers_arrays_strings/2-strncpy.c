#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: the destination buffer
 * @src: the source string
 * @n: the limit  to the strings byts to be copies
 * Return: the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] !=  '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
