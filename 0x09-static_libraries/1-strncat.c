#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: string one
 *@src: string to be added
 *@n: number of bytes
 *Return: a character
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != 0 && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (res);
}
