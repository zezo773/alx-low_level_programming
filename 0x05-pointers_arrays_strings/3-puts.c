#include "main.h"

/**
 * _puts - entry point
 *
 * @str: test case
 *
 * Return: void value
 */
void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
