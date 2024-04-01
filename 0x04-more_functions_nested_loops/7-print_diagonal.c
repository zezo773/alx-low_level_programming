#include "main.h"

/**
 * print_diagonal - The Entry Point
 *
 * a function that draws a diagonal line on the terminal.
 *
 * @n: The Parametter
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
