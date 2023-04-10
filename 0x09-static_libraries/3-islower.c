#include "main.h"

/**
 *_islower-checks for lowercase character
 *@c: lowercase alphabet between a and z
 *Return: 1 (success)
 *Otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
