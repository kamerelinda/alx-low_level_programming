#include "main.h"

/**
 *cap_string - capitalizes all words
 *@str: any word
 *Return: a character
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int cap_next = 1;

	while (*ptr != '\0')
	{
		if (cap_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			cap_next = 0;
		}
		else if ((*ptr >= ' ' && *ptr <= '/') ||
				(*ptr >= ':' && *ptr <= '@') || (*ptr >= '[' && *ptr <= '`') ||
				(*ptr >= '{' && *ptr <= '}'))
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		ptr++;
	}
	return (str);
}
