#include <stdio.h>

/**
 * main-Entry point
 * prints hexadecimal numbers in small letters from 0
 * Return: Always 0 (Success)
 * **/
int main(void)
{
	int num;
	int c;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
