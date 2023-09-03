#include <stdio.h>
#include "main.h"

/**
 * _memset - sets the memery with a a constant byte
 * @s: pointer to the memory being filled
 * @b: constant byte thats used to fill the memory
 * @n: limitter to the number of bytes to fill
 * Return: Pointer to the area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
