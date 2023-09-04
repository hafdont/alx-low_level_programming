#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - creates an array of characters and initializes it with char
 * @size: The size of the array
 * @c: The character which initializes the array
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{	
	unsigned int i;
	char *array;


	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
