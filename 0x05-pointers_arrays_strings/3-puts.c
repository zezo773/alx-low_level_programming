#include "main.h"

/**
 * _puts - The Entry Point
 *
 * a function that prints a string, followed
 * by a new line, to stdout.
 *
 * @str: The Parametter
 *
 * Return: Void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
