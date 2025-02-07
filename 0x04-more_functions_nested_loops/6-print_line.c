#include "main.h"

/**
 * print_line - the entry point
 *
 * @n: test case
 *
 * Return: void value
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
