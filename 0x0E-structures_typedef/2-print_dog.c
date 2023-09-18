#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints info 'bout a dog.
 * @d: pointer to the struct if the dog itself
 *
 * Description: Function that pirnts a out a dog'sinfo
 * Return: (Void) if none found
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
