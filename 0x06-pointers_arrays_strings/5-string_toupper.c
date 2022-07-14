#include "main.h"

/**
* string_tupper -> converting any string to upper case
* @x: string param
* Return string success
*/

char *string_tupper(char *x)
{
	int i = 0

		while (x[i])
		{
			if (x[i]) >= 97 && x[i] <= 122)
				x[i] = x[i] - 32;
			i++;
		}
}
