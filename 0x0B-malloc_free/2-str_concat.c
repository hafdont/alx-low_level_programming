#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatnate two strings into a newly allocated space in memory
 * @s1: The first string
 * @s2:  The second string
 *
 * Return: A pointer to the duplicated string, or NULL if memory not allocated
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		concatenated[i] = s2[j];

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
