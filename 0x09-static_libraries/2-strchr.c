#include <stdio.h>
#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *
 *@s: a pointer to a string
 *
 *@c: character to be found
 *
 *Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
