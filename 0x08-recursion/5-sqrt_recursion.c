#include "main.h"

/**
 * sqaure - function to check
 *
 * @n: int number
 * @i: int number
 *
 * Return: value of sqrt
 */

int sqaure(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (sqaure(n, i + 1));
}

/**
 * _sqrt_recursion - function
 *
 * @n: number
 *
 * Return: value of sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqaure(n, 1));
}
