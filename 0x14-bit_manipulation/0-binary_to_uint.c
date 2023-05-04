#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to int
 * @b: binary to be converted
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int len, base;

	if (!b)
		return (0);

	a = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			a += base;
		}
	}
	return (a);
}
