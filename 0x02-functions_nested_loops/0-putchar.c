#include "main.h"

/**
 * main - the entry point
 *
 * a program that prints a word
 *
 * Return: 0 success
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
