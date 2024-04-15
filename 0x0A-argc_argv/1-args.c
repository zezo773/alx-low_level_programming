#include <stdio.h>

/**
 * main - The entry point
 *
 * a program that prints the number of arguments passed into it.
 *
 * @argc: The First Parametter
 * @argv: The Second Parametter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
