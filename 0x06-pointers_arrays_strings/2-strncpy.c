#include "main.h"

/**
 * *_strncpy - function to concatinate two strings
 *
 * @dest: first string
 * @src: second string
 * @n: number of byets
 *
 * Return: dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
