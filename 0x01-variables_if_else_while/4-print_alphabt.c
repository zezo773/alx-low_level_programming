#include <stdio.h>

/**
 * main - the entry point
 *
 * a program that print the alphabet in lowercase
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
