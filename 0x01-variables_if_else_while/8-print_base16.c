#include <stdio.h>

/**
 * main - Prints hexa decimal base
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;
	int a;

	for (a = 0; a < 10; a++)
		putchar('0' + (a % 10));
	for (letter = 'a'; letter >= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
