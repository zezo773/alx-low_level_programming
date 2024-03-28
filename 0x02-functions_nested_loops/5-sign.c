#include "main.h"

/**
 * print_sign - The Entry Point
 *
 * @n: Is A Parametter
 *
 * Return: 1 if n is greater than zero And
 * Return 0 if n is zero And
 * Returns -1  if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
