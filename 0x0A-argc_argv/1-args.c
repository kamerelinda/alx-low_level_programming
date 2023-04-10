#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *
 *@argc: count of the arguments entered
 *
 *@argv: array of strings
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__ ((unused))  *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
