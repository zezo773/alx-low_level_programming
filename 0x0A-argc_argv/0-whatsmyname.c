#include <stdio.h>

/**
 * main - The entry Point
 *
 * @argc: The First Parametter
 *
 * @argv: The Second Parametter
 *
 * a program that prints its name, followed by a new line.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s \n", argv[0]);
	(void) argc;
	return (0);
}
