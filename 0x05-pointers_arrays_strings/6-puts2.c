#include "main.h"

/**
 * puts2 - the entry point
 *
 * @str: the test case
 *
 * Return: void value
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
