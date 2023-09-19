#include "main.h"

/**
 * print_rev - print the string in reverse order
 *
 * @s: takes a string
 *
 * Return: the string elemnets in reverse order
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
