#include "main.h"

/**
 * _isalpha - function to check if
 * input is alphabet or not
 *
 * @c: checks input
 *
 * Return: return 1 is its alphabter and
 * return 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
