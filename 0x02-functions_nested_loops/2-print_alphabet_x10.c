#include "main.h"

/**
 * print_alphabet_x10 - The Ebtry Point
 *
 * a function that prints 10 times the alphabet,
 * in lowercase, followed biy a new line.
 *
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	char a = '0', j;

	while (a <= '9')
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		a++;
		_putchar('\n');
	}
}
