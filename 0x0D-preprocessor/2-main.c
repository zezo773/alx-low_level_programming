#include <stdio.h>

/**
 * main - The Entry Point
 *
 * a program that prints the name of
 * the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
