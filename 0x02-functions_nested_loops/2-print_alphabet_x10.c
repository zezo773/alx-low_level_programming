#include "main.h"

/**
 * print_alphabet_x10 - the entry point
 *
 * Return: void value
 */
void print_alphabet_x10(void)
{
	int line;
	for (line = 0; line < 10; line++)
	{
		char letter = 97;
		while (letter <= 122)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
