#include <stdio.h>

/**
 * main - function to print numbers with fizz and fozz
 * swparated by comma
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			if (i % 3 != 0)
			{
				printf("Buzz ");
			}
		}
		else if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
