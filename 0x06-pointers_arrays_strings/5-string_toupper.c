#include "main.h"

/**
 * string_toupper - function to upper case the string
 *
 * @s: takes a string
 *
 * Return: string in upper case;
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
