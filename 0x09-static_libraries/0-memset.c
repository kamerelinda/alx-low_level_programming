#include "main.h"

/**
 *_memset - fills the first n bytes
 *
 *@n: number of bytes pointed to by s
 *
 *@s: memory area to be filled
 *
 * @b:byte to be filled in
 *
 * Return: a pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int val = 0;

	while (val < n)
	{
		s[val] = b;
		val++;
	}
	return (s);
}
