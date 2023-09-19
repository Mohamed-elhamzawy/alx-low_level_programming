#include "main.h"

/**
 * _strlen - count the lenght of a string
 *
 * @s: takes a string
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
