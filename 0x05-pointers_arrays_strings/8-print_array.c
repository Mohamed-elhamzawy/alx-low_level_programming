#include "main.h"

/**
 * print_array - function to print elemnts of array
 *
 * @a: array
 * @n: number of elemnts of array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			_putchar(a[i] + '0');
		}
		else
		{
			_putchar(a[i] + '0');
			_putchar(32);
			_putchar(44);
		}
	}
}
