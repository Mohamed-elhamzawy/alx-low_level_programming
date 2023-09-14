#include "main.h"

/**
 * _isupper - function to check if char is upper case
 *
 * @c: checks input for function
 *
 * Return: returns 1 if it 'C' is uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	_putchar('\n')
}
