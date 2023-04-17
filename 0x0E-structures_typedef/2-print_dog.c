#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a structure
 *
 * struct dog - structure for dog
 *
 * @d: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		printf("%s\n", d->name);

		printf("Age: ");
		printf("%f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		printf("%s\n", d->owner);
	}
}
