#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string being serached
 * @accept: they byts to check for
 * Return: the number of bytes in the
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			break;
		s++;
	}
	return (count);
}
