#include <stdio.h>

/**
 * main - The Entry Point
 *
 * a program that prints all arguments it receives.
 *
 * @argc: The Firs Parametter
 * @argv: The Second Parametter
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	(void) argc;
	return (0);
}
