#include "main.h"

/**
 * main - print the small  alphabetics
 *            from a - z
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
