#include "main.h"

/**
 * print_triangle - A Entry Point
 *
 * @size: Is A Parametter
 * a function that prints a triangle, followed by a new line.
 *
 * Return: Void
 */

void print_triangle(int size)
{
	int row, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 1; row <= size; row++)
	{
		for (n = 1; n <= size; n++)
		{
			if ((row + n) <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

}
