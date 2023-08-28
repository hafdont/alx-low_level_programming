#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the destination of the bytes to be copied
 * @src: the source of the bytes to be copies
 * @n: the limit to the number of bytes to be copied
 * Return: dest the copied memory/string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
