#include "main.h"

/**
 *more_numbers - print 10 times from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else if (j >= 10 && j < 100)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
		i++;
	}

}
