#include "main.h"

/**
 * print_most_numbers - the entry point
 *
 * Return: void value
 */
void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if ((num != 50) && (num != 52))
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
