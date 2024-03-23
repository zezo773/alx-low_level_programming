#include <stdio.h>

/**
 * main - The Entry Point
 *
 * program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: (0)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
