#include <stdio.h>

/**
 * main - The Entry Point
 *
 * a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: (0)
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
