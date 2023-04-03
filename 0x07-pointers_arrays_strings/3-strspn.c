#include "main.h"

/**
 *_strspn - function length of a prefix substring
 *
 *@s: pointer to s
 *
 *@accept: input
 *
 *Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, val;

	val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
					val++;
			}
		}
		else
			return (val);
	}
	return (val);
}
