#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: pointer to a
 *@b: pointer to b
 *Return - void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
