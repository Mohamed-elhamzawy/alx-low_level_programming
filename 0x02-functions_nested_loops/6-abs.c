#include "main.h"

/**
 * _abs - funtion to change the sign of number
 *
 * @n: takes -ve number
 *
 * Return: return absolute numb
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
