#include "main.h"

/**
 * print_last_digit - function to prit last digit
 *
 * @n: check the number
 *	and divide it on 10 to print last digit of him
 *
 * Return: always (0)
 */

int print_last_digit(int n)
{
	int numb;

	if (n < 0)
	{
		numb = -1 * (n % 10);
		_putchar('0' + numb);
		return (numb);
	}
	else
	{
		numb = n % 10;
		_putchar('0' + numb);
		return (numb);
	}
}	
