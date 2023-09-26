#include "main.h"

/**
 * *_memset - function to change the meomry contains with another somthing
 *
 * @s: string
 * @b: value that i want to change to
 * @n: number of bytes
 *
 * Return: the new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
		*s[i] = '0x01';
	return (s);
}
