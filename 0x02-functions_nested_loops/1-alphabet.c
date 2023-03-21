#include "main.h"

/**
 *print_alphabet-function prints alphabets in lower case
 *Return: void (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
