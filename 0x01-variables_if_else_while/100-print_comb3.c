#include<stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * in ascending order, number should be printed in two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int digits1, digits2;

	for (digits1 = 0; digits1 < 9; digits1++)
	{
		for (digits2 = digits1 + 1; digits2 < 10; digits2++)
		{
			putchar((digits1 % 10) + '0');
			putchar((digits2 % 10) + '0');

			if (digits1 == 8 && digits2 == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
