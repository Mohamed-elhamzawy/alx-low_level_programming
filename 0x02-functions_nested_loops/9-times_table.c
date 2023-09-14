#include "main.h"

/**
 * times_table - function print a 9 table
 *
 */

void times_table(void)
{
	int rw;
	int co;
	int mult;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar(48);
		for (co = 1; co <= 9; co++)
		{
			_putchar(',');
			_putchar(' ');

			mult = rw * co;

			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');
			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
