#include "main.h"

/**
 * print_line - The Entry Point
 *
 * @n: Is The Parametter
 *
 * a function that draws a straight line in the terminal.
 *
 * Return: nothing
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
