#include <stdio.h>

/**
 * main - The Entry Point
 *
 * a program that prints all single digit numbers
 * of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: (0)
 */

int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
