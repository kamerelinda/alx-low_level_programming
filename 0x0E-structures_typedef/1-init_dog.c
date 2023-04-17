#include "dog.h"

/**
 * init_dog - function that initializes a struct
 *
 * @struct dog -structure and tag
 *
 * @d: pointer
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
