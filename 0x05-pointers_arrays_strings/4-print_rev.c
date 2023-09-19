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
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	for (*s = count; *s >= 0; s--)
		_putchar(0 + *s);
	_putchar('\n');
}
