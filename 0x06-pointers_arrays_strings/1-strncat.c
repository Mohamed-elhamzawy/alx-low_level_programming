#include "main.h"

/**
 * *_strncat - function to concatinate two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of byets
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = n; src[j] != '\0'; j++)
		dest[i++] = src[j];
	return (dest);
}
