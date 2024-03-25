#include <stdio.h>

/**
 * main - The Entry Point
 *
 * a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 *
 * Return: (0)
 */

int main(void)
{
	int a, c;

	a = 48;
	c = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
