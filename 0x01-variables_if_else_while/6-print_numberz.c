#include <stdio.h>

/**
 * main-Entry point
 * prints single digit numbers from 0
 * Return: Always 0 (Success)
 * **/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
