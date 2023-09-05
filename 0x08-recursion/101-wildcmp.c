#include <stdio.h>

/**
 * wildcmp - Compare two strings with a wildcard (*)
 * @s1: the first string.
 * @s2: the second string with a wildcard(*)
 *
 * Return: 1 if the strings canare identical, else returns 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*' || *s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	return (0);
}
