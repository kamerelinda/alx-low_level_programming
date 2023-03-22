#include "main.h"

/**
 *print_times_table-prints the times table of a number
 *@n:number between 0 and 15
 *Return: void
 */
void print_times_table(int n)
{

	if (n > 0 && n <= 15)
	{
		int i, j, r;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (r < 10)
				{
					_putchar(r + '0');
				}
				else if (r < 100)
				{
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
				else
				{
					_putchar(r / 100 + '0');
					_putchar((r / 10) % 10 + '0');
					_putchar(r % 10 + '0');
				}
				if (j < n)
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	return;
}
