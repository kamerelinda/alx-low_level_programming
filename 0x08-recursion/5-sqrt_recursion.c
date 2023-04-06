#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 *
 * @n: integer
 *
 * @i: integer
 *
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n < 0)
		return (-1);
	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - main function
 *
 * @n: an integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
