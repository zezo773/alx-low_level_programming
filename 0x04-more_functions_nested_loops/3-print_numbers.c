#include "main.h"

/**
 * print_numbers - the entry point
 *
 * Return: void value
 */
void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
