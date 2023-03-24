#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 success
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n > 1)
	{
		printf("%ld\n", n);
	}
	return (0);
}
