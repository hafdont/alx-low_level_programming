#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string in a newly allocated space in memory.
 * @str: The input string to duplicate
 *
 * Return: A pointer to the duplicated string, or Null if memory want allocated
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
