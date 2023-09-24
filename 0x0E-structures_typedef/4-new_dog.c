#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Structure represents a dog
 * @name: dogs name
 * @age: Dog's age
 * @owner: Dog's oners
 *
 * Description : Struct defines a dog,its name age and owner
 *
 * Return: Void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *new_dog = malloc(sizeof(dog_t));


		if (new_dog == NULL)
		{
			return (NULL);
		}

		new_dog->name = strdup(name);
		new_dog->owner = strdup(owner);

		if (new_dog->name == NULL || new_dog->owner == NULL)
		{
			if (new_dog->name != NULL)
			{
				free(new_dog->name);
			}
			if (new_dog->owner != NULL)
			{
				free(new_dog->owner);
			}
			free(new_dog);
			return (NULL);
		}

		new_dog->age = age;

		return (new_dog);
}
