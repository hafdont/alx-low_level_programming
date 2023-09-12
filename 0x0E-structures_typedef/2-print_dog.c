#include <stdio.h>
#include "dog.h"

/**
 * print_dog: function that prints info 'bout a dog.
 * @d: pointer ti the strict if the dog itself
 *
 * Description: function that pirnts a out a dog'sinfo
 * Return: NULL if none found
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
