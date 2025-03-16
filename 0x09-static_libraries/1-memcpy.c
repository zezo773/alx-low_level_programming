#include "main.h"

/**
 * _memcpy - the entry point
 *
 * @dest: the destenation parameter
 * @src: the src character
 * @n: the number of bytes
 *
 * Return: the pointer of character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
