#include "main.h"

/**
 * _print_rev_recursion - the entry point
 *
 * @s: the parameter
 *
 * Return: void value
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
