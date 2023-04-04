#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: a string
 *
 * @needle: a substring
 *
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int p, q;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (q = 0; needle[q] != '\0'; q++)
		{
			if (haystack[p] == needle[q])
				return (needle);
		}
	}
	return (NULL);
}
