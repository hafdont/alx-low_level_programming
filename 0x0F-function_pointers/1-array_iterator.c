#include "function_pointers.h"

/**
 * array_iterator - Apply a function  to each element of an array
 * @array: The integer array to be operated on.
 * @size: The size of the array
 * @action: Apointer to the function to apply to each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
