#include "main.h"

/**
 * check_prime - check if n is prime
 *
 * @n: number to be checked
 *
 * @i:iteration times
 *
 * Return: 1 for prime or 0 composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - function that finds a prime number
 *
 * @n: integer
 *
 * Return: 1 (success) or 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
