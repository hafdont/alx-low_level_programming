#include <stdio.h>
#include "main.h"

/**
 * string_toupper - convertes lowercase to upper case
 * @str: the string tobe converted
 *
 * Return: pointer to the converted string
 */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (str);
}
