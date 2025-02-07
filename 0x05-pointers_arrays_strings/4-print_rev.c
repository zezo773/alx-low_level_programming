#include "main.h"

/**
 * print_rev - the entry point
 *
 * @s: test case
 *
 * Return: void value
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	while (s[count] >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
