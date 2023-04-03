#include <stdio.h>
#include "main.h"


/**
 *_strchr - function that locates a character in a string
 *
 *@s: a pointer to a string
 *
 *@c: character to be found
 *
 *Return: pointer or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
