#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The Entry Point
 *
 * program will assign a random number to the
 * variable n each time it is executed.
 * Complete the source code in order to print the last digit of
 * the number stored in the variable n.
 *  Return: (0)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = (n % 10);

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
	}
	return (0);
}
