#include "main.h"

/**
 * *_memcpy - function to change the meomry contains with another array
 *
 * @dest: array i will copy the array to
 * @src: array i want to add
 * @n: number of bytes
 *
 * Return: the new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
