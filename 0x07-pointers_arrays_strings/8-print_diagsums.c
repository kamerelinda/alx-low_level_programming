#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints sum of two diagonals
 *
 * @a: array
 *
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int p, q, sum1 = 0, sum2 = 0;

	for (p = 0; p <= (size * size); p = p + size + 1)
		sum1 = sum1 + a[p];
	for (q = size - 1; q <= (size * size) - size; q = q + size - 1)
		sum2 = sum2 + a[q];
	printf("%d, %d\n", sum1, sum2);
}
