#include "main.h"

/**
 * print_last_digit - The Entry Point
 *
 * a function that prints the last digit of a number.
 *
 * @n: Is A Parametter
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
	}
	else if (n >= 0)
	{
		n = (n % 10);
	}
	_putchar(n + '0');
	return (n);
}
