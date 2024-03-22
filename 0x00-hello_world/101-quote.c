#include <unistd.h>

/**
 * main - The Entry Point
 *
 * a C program that prints exactly and that piece of art is useful
 * " - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Return: (1)
 */

int main(void)
{
	char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qu, 59);
	return (1);
}
