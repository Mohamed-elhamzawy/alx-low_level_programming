#include "main.h"

/**
 * *_strcat - function to concatinate two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j]; j++)
		dest[i] = src[j];
	return (dest);
}
