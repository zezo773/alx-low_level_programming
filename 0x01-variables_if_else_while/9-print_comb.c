#include <stdio.h>

/**
 * main - The Entry Point
 *
 * a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: (0)
 */

int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}

	putchar('\n');
	return (0);
}
