#include "main.h"

/**
 * print_alphabet - we use this function to print lower alphabe
 * from a - z
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
