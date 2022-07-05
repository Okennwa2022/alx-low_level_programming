#include <stdio.h>

/**                                                                                                                                           
 *  main -> program that prints the alphabet in lowercase                                                                                      
 *  Return : always 0                                                                                                                          
 */          
int main(void)                                                                                                                                
{   
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii code for ne line */
	
	return (0);
}          
