#include "main.h"

/**
 *print_sign-prints the sign of a number
 *@n: may be 0 ,less or more than zero
 *Return: 1(positive) 0 and -1(negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
