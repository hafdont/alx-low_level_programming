#include  "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in string
 * @c: the character to be located
 * @s: the string where w are looking for the character
 * Return:  NULL if character c isnt found,
 * or the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
