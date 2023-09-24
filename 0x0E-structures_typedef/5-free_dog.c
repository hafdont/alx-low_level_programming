#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the dog struct of the memory
 * @d: A pointer the freed dog struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}

		free(d);
	}
}
