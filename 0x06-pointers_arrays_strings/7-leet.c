#include "main.h"

/**
 * *leet - function to encode the characters
 *
 * @s: string
 */

char *leet(char *s)
{
	int i, j;
	char a[] ={'a' 'A' 'e' 'E' 'o' 'O' 't' 'T' 'l' 'L'};
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s);
}
