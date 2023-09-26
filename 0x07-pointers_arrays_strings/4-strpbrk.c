#include "main.h"

/**
 * _strpbrk - function to print the length of substring
 *
 * @s: string
 * @accept: string
 *
 * Return: the position of this char
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		s++;
		}
	}
	return (NULL);
}
