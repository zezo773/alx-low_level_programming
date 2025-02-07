#include "main.h"

/**
 * puts_half - entry point
 *
 * @str: test case
 *
 * Return: void value
 */
void puts_half(char *str)
{
	int half, len = 0;


	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
