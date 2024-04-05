#include "main.h"

/**
 * _memset - The Entry Point
 *
 * a function that fills memory with a constant byte.
 *
 * @s: Thr First Parametter
 * @b: The Second Parametter
 * @n: The Third Parametter
 *
 * Return: Char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
