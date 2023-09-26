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
	int i;
	int j;
	int *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (NULL);
}
