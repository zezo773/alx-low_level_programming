#include "main.h"

/**
 * string_toupper - the entry point
 *
 * @x: the parameter
 *
 * Return: pointer of char value
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] -= 32;
		}
		i++;
	}

	return (x);
}
