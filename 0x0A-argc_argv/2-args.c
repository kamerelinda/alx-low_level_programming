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
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
