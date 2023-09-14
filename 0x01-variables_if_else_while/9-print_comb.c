#include <stdio.h>

/**
 * main - print possible combinations
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	
	for (a = 0; a <= 9; a++)
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
