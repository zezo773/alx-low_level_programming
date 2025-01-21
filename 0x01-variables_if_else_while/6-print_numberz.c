#include <stdio.h>

/**
 * main - the entry point
 *
 * program that prints simle digit numbers from base of 10
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
