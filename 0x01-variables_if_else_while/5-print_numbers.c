#include <stdio.h>

/**
 * main - the entry point
 *
 * a program that print the numbers form 0 to 9
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
