#include "main.h"

/**
 * _strncpy - the entry point
 *
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the third parameter
 *
 * Return: pointer of char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
