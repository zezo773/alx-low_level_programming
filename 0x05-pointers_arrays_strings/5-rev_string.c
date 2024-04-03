#include "main.h"

/**
 * rev_string - The Entry Point
 *
 * a function that reverses a string.
 *
 * @s: The Parametter
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int i, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	while (s[len])
	{
		_putchar(s[len]);
		len--;
	}

}
