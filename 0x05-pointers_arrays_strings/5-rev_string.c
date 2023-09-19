#include "main.h"

/**
 * rev_string - function to print a string
 *
 * @s: ake a string
 *
 * Return: the string elemnts in reverse
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
