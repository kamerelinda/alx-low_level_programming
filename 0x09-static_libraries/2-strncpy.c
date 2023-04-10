#include "main.h"

/**
 *_strncpy - copies up to n characters from src
 *@dest: pointer to the destination
 *@src: string to be copied
 *@n: number of characters to be copied from source
 *Return: a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
