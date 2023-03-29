#include "main.h"

/**
 *reverse_array - reverses content of an array
 *@a: an array
 *@n: number of elements of the array
 *Return: void;
 */
void reverse_array(int *a, int n)
{
	int i, swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}
}
