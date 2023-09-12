#include <stdio.h>

/*
 *  main - entry point
 *
 *  description: print a text without using printf or puts
 *
 *  Return: Always 0
*/
int main(void)
{
	char txt[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (int i = 0; txt[i] != '\0'; i++)
		putchar(txt[i]);
	putchar('\n');
	return (0);
}	
