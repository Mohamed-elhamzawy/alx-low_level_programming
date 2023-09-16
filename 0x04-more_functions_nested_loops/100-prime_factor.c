#include <stdio.h>

/**
 * main - function to print max prime number
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	int i;
	int max;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	max = 2;
	for (i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		if (i > max)
		{
			max = i;
		}
	}
	printf("%d", max);
	return (0);
}
