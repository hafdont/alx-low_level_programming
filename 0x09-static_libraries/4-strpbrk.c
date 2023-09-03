#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locats a set of bytes that are simillar
 * @s: the being checked
 * @accept: the string being compared
 * Return: a pointer with s
 * or NUll
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
