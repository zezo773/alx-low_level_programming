#include <stdio.h>

/**
 * main - the entry point
 *
 * @argc: the argument coun
 * @argv: the argumet values
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
