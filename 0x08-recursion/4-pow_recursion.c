#include "main.h"

/**
 * _pow_recursion - returns a value of an integer raised to the power of another
 *
 * @x: integer to be raised
 *
 * @y: power
 *
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
