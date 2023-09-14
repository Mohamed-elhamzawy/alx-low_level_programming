#include "main.h"

/**
 * jack_bauer - print every minute of jack
 *
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int h;

	for (i = 0; i <= 2; i++)
	{
		_putchar(i + '0');
		for (j = 0; j <= 3; j++)
		{
			_putchar(j + '0');
			_putchar(58);
			for (k = 0; k <= 5; k++)
			{
				_putchar(k + '0');
				for (h = 0; h <= 9; h++)
				{
					_putchar(h + '0');
				}
				_putchar('\n');
			}	
		}
	}
}
