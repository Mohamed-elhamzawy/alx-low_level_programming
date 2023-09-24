#include "main.h"

/**
 * *_strcpy - function to copy string into another string
 *
 * @dest: first string
 * @src: second string
 *
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
		;
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
