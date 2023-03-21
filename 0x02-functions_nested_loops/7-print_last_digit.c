#include "main.h"

/**
 *print_last_digit -a function that prints the last digit of a number
 *@m: number's last digit result
 *Return: value of the last digit
 */
int print_last_digit(int num)
{
	int digit;

	digit = (num % 10);

	if (digit < 0)
	{
		digit = (-1 * digit);
	}
	_putchar(digit + '0');
	return (digit);
}
