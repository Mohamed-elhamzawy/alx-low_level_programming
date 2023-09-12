#include <stdio.h>
#include <string.h>
/*
 *  main - entry point
 *
 *  description: print a text without using printf or puts
 *
 *  Return: Always 0
*/
int main(void)
{
	int i;

	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (i = 0; txt[i] != '\0'; i++)
		putchar(txt[i]);
	putchar('\n');
	return (1);
}	
