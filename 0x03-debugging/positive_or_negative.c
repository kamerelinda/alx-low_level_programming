#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative-statement to say if n is negative or positive
 * @n:inputed number
 * Return: void (success)
 * **/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}

