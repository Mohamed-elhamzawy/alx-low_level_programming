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
	int count;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	if (count / 2 == 0)
	{
		for (i = (count / 2); str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((count - 1) / 2); str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
