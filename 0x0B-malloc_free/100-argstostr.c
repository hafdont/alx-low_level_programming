#include <stdlib.h>

/**
 * argstostr - Concatenate all programarguments into a single string
 * @ac: The number of arguments
 * @av: An array of string containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NUll if fails
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k = 0;
	char *result;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';
	return (result);
}
