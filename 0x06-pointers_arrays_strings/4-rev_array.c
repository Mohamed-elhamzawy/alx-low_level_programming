#include "main.h"

/**
 * reverse_array - function to reverse  strings
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0; j = (n - 1); i < j; i++; j++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
