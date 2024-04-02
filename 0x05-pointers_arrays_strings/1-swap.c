#include "main.h"

/**
 * swap_int - The Entry Point
 *
 * a function that swaps the values of two integers.
 *
 * @a: The First Parametter
 * @b: The Second Parametter
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
