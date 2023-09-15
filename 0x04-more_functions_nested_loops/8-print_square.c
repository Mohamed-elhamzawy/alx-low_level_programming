#include "main.h"

/**
 * print_square - function to draw a square
 *
 * @size: size of our square
 *
 */

void print_square(int size)
{
	int rw;
	int col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (rw = 0; rw < size; i++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
