#include <stdlib.h>
#include <stdio.h>

/**
 * main -0 The Entry Point
 *
 * a program that multiplies two numbers.
 *
 * @argc: The First Parametter
 * @argv: The Second Parametter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
