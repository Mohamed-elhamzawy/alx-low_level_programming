#include <stdio.h>

/**
 * main - function to print sum of multiples
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int sum = 0;
	int i, mul, num;

	scanf("%d", &num);
	if (num == 3 || num == 5)
	{
		for (i = 1; i < 342; i++)
		{
			mul = num * i;
			if (mul < 1024)
			{
				sum += mul;
			}
			else
				break;
		}
		printf("the sum of multiplies of %d below 1024 is %lu\n", num, sum);
	}
	return (0);
}
