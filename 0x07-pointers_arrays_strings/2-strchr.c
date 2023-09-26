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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
