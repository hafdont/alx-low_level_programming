#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string.
 * @s2: Second string
 * @n: the limit of number of bytes from s2 to copy
 *
 * Return: A pointer to the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *concatenated, *ptr;

	if (s1 != NULL)
	{
		while (s1[len1])
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2])
		{
			len2++;
		}
	}

	n = (n >= len2)  ? len2 : n;

	concatenated = malloc(len1 + n + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	ptr = concatenated;

	while (i < len1)
	{
		*ptr++ = s1[i++];
	}

	while (i < n)
	{
		*ptr++ = s2[i++];
	}

	*ptr = '\0';

	return (concatenated);
}
