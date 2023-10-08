#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printd("\n");

	return (0);
}
