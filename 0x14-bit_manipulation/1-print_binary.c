#include "main.h"

/**
 * print_binary - convert decimal to binary and print it out
 * @n: decimal number
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
