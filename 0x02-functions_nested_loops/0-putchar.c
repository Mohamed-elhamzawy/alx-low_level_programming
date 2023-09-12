#include "main.h"
/**
 * main - print putchar
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	putchar('\n');
	return (0);
}
