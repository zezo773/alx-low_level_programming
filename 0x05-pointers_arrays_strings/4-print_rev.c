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
	int i;

	i = 62;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
