#include <stdio.h>

/**
 * main - the entry point
 *
 * prints all possible combinations of single-digit numbers
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int num = 48;

	while(num <= 57)
	{
		putchar(num);
		if(num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
