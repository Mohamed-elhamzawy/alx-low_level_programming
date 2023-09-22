#include "main.h"

/**
 * _strcmp - function to compare between  two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between string
 */

int _strcmp(char *s1, char *s2)
{
	int equal;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		*s1++;
		*s2++;
	}
	return (eqaul)
}