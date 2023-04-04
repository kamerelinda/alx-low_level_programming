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
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (NULL);
}
