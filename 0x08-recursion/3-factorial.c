#include "main.h"

/**
 * factorial - function to calculate the factorial of any number
 *
 * @n: number
 *
 * Return: the result
 */

int factorial(int n)
{
	if(n <= 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
