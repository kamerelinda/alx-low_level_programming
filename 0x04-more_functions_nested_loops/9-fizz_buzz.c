#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char* a= "Fizz";
	char* b= "Buzz";
	char* c= "FizzBuzz";

	for (i = 1; i <=100; i++)
	{
	
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", c);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", a);
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
