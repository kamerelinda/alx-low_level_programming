#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry point
 * apply if conditional statement to say if n is negative or positive
 * Return: Always 0 (success)
 * **/
void positive_or_negative(int n)
{
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        if (n < 0)
        {
                printf("%d is negative\n", n);
        }
}

