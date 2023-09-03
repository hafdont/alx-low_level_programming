#include "main.h"

/**
 * _strcpy - hold thes string frm the pointer src
 * @dest: Pointer to the destination
 * @src: source destination pointer
 *
 * Return: destination dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
