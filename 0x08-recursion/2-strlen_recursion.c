#include "main.h"

/**
 * _strlen_recursion - function to count the length of string
 *
 * @s: string
 *
 * Return: the lenght of string
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		c += _strlen_recursion(s + 1) + 1;
	}
	return (c);
}
