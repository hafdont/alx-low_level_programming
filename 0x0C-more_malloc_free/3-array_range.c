#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: the min value
 * @max: the max value
 *
 * Return: A pointer to th e newly created aray, or NULL if not succes
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}

	return (arr);
}
