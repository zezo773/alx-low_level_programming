#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char putchar[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(putchar[i]);
	}
	putchar('\n');
	return (0);
}
