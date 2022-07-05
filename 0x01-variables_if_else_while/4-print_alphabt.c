#include <stdio.h>

/**
 * main -> program that prints the alphabet in lowercase
 * Return : always 0
 */

int main(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar(10); /* this is an ascii code for a new line */

	return (0);
}
