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
	int mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else if (argc == 1)
	{
		printf("Error\n");
			return (1);
	}
	return (0);
}
