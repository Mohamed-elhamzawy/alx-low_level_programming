#include "main.h"

/**
 * _pow_recursion - function to print the power of number
 *
 * @x: number
 * @y: power of number
 *
 * Return: resukt x pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x , y - 1));
}
