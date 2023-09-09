#include<stdio.h>
/**
 * main -print upper and lower alpha
 *
 * Return: 0
*/

int main(void)
{
	char letter;

       	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'q' || letter == 'e')
		letter++;
	else
		putchar(letter);
	}
	putchar('\n');
        return (0);
}
