#include "main.h"

/**
 * print_square - The Entry Point
 *
 * a function that prints a square, followed by a new line.
 *
 * @size: A Parametter
 *
 * Return: Void
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
