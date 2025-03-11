#include "main.h"

/**
 * _puts_recursion - the entry point
 *
 * @s: the parameter
 *
 * Return: void value
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
