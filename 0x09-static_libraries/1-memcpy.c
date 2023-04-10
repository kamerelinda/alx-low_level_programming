#include "main.h"

/**
 * _memcpy - copies bytes from one memory area to another
 *@dest: destination memory area
 *@src: memory area to be copied
 * @n: number of bytes to copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int val = 0;

		while (val < n)
		{
			dest[val] = src[val];
			val++;
		}
		return (dest);
}
