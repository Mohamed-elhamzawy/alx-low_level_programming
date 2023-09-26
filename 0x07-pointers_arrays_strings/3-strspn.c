#include "main.h"

/**
 * *_strchr - function to print the length of substring
 *
 * @s: string
 * @accept: string
 *
 * Return: the position of this char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int z;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					z++;
			}
		}
		else 
			return (z);
	}
	return (z);
}
