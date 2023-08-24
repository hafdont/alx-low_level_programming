#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first pointer to a string tobe compared
 * @s2:  second character to be compared against
 *
 * REturn: the ASCII VALUES OF THE DIFFERENCE BETWEEN the
 * the two strings
 * 0 if strings are identical
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
