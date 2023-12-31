#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog defined with a name age and owner
 * @name: String as name of the dog
 * @age: aFloat as age of hte dog
 * @owner: String as name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H */
