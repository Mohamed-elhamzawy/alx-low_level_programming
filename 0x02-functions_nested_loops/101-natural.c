#include <stdio.h>

/**
 * main - function to print sum of multiples
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int sum = 0;
	int num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}
	printf("the sum of multiples is  %lu\n", sum);
	return (0);
}
