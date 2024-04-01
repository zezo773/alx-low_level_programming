#include "main.h"

/**
 * print_numbers - The Entry Point
 *
 * a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Return: nothing
 */

void print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
