#include <stdio.h>

/**
 * main -> program that prints the alphabet in lowercase
 * Return : always 0
 */

int main(void)
{
	int ch;
	for(ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}	
	putchar(10); /* this is an ascii code for a new line */

return (0);
