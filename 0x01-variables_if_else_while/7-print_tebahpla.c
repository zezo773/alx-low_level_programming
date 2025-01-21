#include <stdio.h>

/**
 * main - the entry point
 *
 * a program that prints a lowercase alphabet in reverse
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
