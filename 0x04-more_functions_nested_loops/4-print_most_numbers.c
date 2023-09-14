#include "main.h"

/**
 * print_most_numbers - function to print numbers except 2/4
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 2 || n != 4)
			_putchar(n);
	}
	_putchar('\n');
}
