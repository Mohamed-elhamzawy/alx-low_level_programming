#include "main.h"

/**
 * print_times_table - function to print time table of any number
 *
 * @n: number of time table
 */

void print_times_table(int n)
{
	int i, j, mult, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);
				mult = i * j;
				if (mult <= 9)
				{
					_putchar(32);
					_putchar(' ');
				}
				else if (mult > 9 && mult < 100)
				{
					_putchar(32);
					_putchar((mult / 10) + 48);
				}
				else if (mult >= 100)
				{
					_putchar((mult / 100)+ '0');
					r = mult / 10;
					_putchar((r % 10) + '0');
				}
				_putchar((mult % 10));
			}
			_putchar('\n');
		}
	}
}
