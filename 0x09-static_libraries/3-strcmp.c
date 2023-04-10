#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: string one
 *@s2: string two
 *Return: difference integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
