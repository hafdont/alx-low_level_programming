#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words) or NULL if it fails
 */

char **strtow(char *str)
{
	int i, j, k = 0, word_count = 0;
	char **words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] !=  '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
			;
		words[i] = (char *)malloc((j - k + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			for (i = 0; i < word_count; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}

		strncpy(words[i], str + k, j - k);
		words[i][j - k] = '\0';
		k = j;
	}
	words[word_count] = NULL;
	return (words);
}
