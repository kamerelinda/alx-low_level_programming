#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *Description-fprint on standard error
 * Return:1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 64);
	return (1);
}
