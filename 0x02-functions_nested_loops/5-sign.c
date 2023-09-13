#include "main.h"

/**
 * print_sign - funtion to chech the signs
 *
 * @n: takes integer type input
 *
 * Return: return 1 if its +ve and 0 if zero and -1 if its -ve
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar(43);
		return (1);
	else if (n == 0)
		_putchar(48);
		return (0);
	else
		_putchar(45);
		return (-1);
}
