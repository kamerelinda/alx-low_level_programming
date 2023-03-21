#include "main.h"

/**
 *_abs-computes the absolute value of an integer
 *@n: any number
 *Return: 0 (success)
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
