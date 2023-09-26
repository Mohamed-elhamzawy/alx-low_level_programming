#include "main.h"

/**
 * *_strchr - function to search about character in a string
 *
 * @s: string
 * @c: charcater 
 *
 * Return: the position of this char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ( s[i] == c)
		{
			return (i);
		}
	}
	return (NULL);
}
