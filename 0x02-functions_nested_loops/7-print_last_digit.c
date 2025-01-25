#include "main.h"

/**
 * print_last_digit - the entry point
 *
 * @num: thr test
 *
 * Return: the last digit of num
 */
int print_last_digit(int num)
{
	int lastdigit;

	if (num < 0)
	{
		lastdigit = (num * -1) % 10;
	}
	else
	{
		lastdigit = num  % 10;
	}
	_putchar('0' + lastdigit);

	return (lastdigit);
}
