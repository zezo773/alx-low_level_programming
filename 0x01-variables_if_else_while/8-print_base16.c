#include <stdio.h>

/**
 * main - the entry point
 *
 * a program that prints the numbers base 16 in lowercase
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int num = 48;
	int letter = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
