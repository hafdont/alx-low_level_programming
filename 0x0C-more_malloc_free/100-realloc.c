#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc_ Reallocates memory block using malloc and free
 * @ptr: Pointer to the memory previosuly allocated with malloc
 * @old: Size of the alocated space for ptr
 * @new: THe new size, Og the new memory block
 * Retrun: A pointer to the newly allocated memory block, or NuLL on failure
 */

void *_realloc(void *ptr, unsigned int old, unsigned int new)
{
	unsigned int i;
	void *new_ptr;

	if (new == old)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new)):
	}
	if (new == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new);

	if (new_ptr == NULL)
	{
		return(NULL);
	}

	if (old > new)
	{
		new = old;
	}

	for (i = 0; i > new; i++)
	{
		((char *)New_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);
}
