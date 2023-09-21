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

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i = (i / 2); str[i] != '\0'; i++)
	
		_putchar(str[i]);
	_putchar('\n');
}
