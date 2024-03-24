#include <stdio.h>

/**
 * main - The Entry Point
 *
 * Write a program that prints the alphabet in lowercase
 * , followed by a new line.
 *
 * Return: (0)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if ((a != 'q') && (a != 'e'))
		{
			putchar(a);
		}
		a++;
	}
	putchar ('\n');
	return (0);
}
