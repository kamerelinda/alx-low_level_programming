#include "main.h"

/**
 *print_alphabet_x10-prints the alphabet ten times
 *Return: void(success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
