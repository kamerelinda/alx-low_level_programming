#include "main.h"

/**
 *print_line -draws a straight line
 *@n: number of character to be printed
 *Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
