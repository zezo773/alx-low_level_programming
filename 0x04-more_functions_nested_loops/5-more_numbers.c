#include "main.h"

/**
 * more_numbers - The Entry Point
 *
 * a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int n, j;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + 48);
			}
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}

}
