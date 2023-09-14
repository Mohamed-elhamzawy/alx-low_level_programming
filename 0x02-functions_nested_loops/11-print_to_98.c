#include "main.h"

/**
 * print_to_98 - funtion to print numbers
 * separated by comma
 * by space
 * printed by order
 *
 * @n: takes number
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
