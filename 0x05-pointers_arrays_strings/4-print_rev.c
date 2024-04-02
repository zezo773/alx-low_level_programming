#include "main.h"

/**
 * print_rev - The Entry Point
 *
 * a function that prints a string, in reverse, followed by a new line.
 *
 * @s: The Parametter
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
