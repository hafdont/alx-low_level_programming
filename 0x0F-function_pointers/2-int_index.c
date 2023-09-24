#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The integer array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer ti the comparison functions
 * Return: -1 on Success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
