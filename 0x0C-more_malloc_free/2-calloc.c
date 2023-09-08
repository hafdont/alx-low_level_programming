#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an ar=ray and sets in to 0
 * @nmemb: The number of elemnts in the array
 * @size: The size (in bytes) of each element
 *
 * Return: A pointer to the allocated memory, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
