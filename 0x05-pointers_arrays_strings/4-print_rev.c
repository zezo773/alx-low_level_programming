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
	int i, len, n;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	n = len;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
