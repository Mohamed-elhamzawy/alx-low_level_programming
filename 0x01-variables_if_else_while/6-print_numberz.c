#include <stdio.h>

/**
 * main - Prints 10 numbers by putchar
 *
 * Reurn 0.
 */
int main(void)
{
	int a;

	for (a = 0; a <= 10; a++)
		putchar('0' + (a %10));
	putchar('\n');
	return (0);
}
