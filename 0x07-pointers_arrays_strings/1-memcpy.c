#include "main.h"

/**
 * _memcpy - The Entry Point
 *
 * a function that copies memory area.
 *
 * @dest: First Parametter
 * @src: Second Parametter
 * @n: Third Parametter
 *
 * Return: Char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
