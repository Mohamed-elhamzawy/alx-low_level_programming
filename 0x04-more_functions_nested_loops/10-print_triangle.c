#include "main.h"

/**
 * print_triangle - function to draw a triangle
 *
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j) <= size)
				{
					_putchar(' ');
				}
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
