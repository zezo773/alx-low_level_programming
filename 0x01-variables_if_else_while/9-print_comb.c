#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all numbers from 0 to 9 with commas and spaces
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
