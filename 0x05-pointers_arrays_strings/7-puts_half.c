#include "main.h"

/**
 * puts_half - function to print a string
 *
 * @str: ake a string
 *
 * Return: the string elemnts
 */

void puts_half(char *str)
{
	int i;
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len / 2 == 0)
	{
		for (i = (len / 2); str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((len - 1) / 2); str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
