#include <stdio.h>

/**
 * main - the entry point
 *
 * this program print alphabet in lowercase
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
