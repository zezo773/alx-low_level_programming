#include "main.h"

/**
 * swap_int - the entry point
 *
 * @a: first num
 * @b: second num
 *
 * Return: void value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
