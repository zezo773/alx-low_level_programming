#include "main.h"

/**
 * _strncat - the entry point
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: pointer of char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	if (i < n)
		dest[dest_len] = '\0';

	return (dest);
}
