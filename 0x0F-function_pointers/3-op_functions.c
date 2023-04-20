#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sums two numbers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - remainder of division of two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
