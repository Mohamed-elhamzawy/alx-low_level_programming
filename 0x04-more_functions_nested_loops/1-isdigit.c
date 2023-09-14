#include "main.h"

/**
 * _isdigit - check for a number
 *
 * @c: check this number
 *
 * Return: return 1 if its a digit
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
	_putchar('\n');
}
