#include "main.h"

/**
 * _islower - function to check if
 *            character is lower case
 *
 * @c: checks input for function
 *
 * Return: returns 1 if it 'c' is lower case
 *                 otherwise always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
