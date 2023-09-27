#include "main.h"

/**
 * print_diagsums - function
 *
 * @a: string
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int s1 = 0;
	unsigned int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%lu, ", s1);
	printf("%lu\n", s2);
}
