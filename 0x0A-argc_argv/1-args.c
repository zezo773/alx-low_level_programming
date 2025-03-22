#include <stdio.h>

/** 
 * maint - the entry point
 *
 * @argc: arrgumen count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);	
}
