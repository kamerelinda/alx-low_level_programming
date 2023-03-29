#include "main.h"

/**
 *string_toupper - changes all lowercase to uppercase
 *@let: string
 *Return: character
 */
char *string_toupper(char *let)
{
	char *ptr = let;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (let);
}
