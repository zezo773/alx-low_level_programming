#include "main.h"

/**
 * _memset - the entry point
 *
 * @s: the array
 * @b: the characters will use
 * @n: the number of byte
 *
 * Return: pointer of character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
