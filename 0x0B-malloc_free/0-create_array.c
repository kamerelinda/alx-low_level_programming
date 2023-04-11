#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - function creates an array of chars
 *
 *@size: size of array
 *
 *@c: char to fill in the array
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
