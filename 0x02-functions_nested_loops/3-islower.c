#include "main.h"

/**
 * _islower - function to chech if
 *            character lower case
 *
 * @C: checks input for function
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
