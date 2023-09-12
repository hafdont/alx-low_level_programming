#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes the dog strucccture
 * @d: pointer to the dog
 * @name: Name of the dog
 * @age: The dogs age
 * @owner: Name of the owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
