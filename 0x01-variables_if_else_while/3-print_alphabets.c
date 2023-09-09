#include<stdio.h>
/**
 * main -print upper and lower alpha
 *
 * Return: 0
*/

int main(void)
{
	char letter;
	char L;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
