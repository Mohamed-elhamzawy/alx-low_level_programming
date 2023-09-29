#include "main.h"

/**
 * _print_rev_recursion - function to print a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(_print_rev_recursion(s - 1));
	}
	else
		_print_rev_recursion(s + 1);
	_putchar('\n');
}
