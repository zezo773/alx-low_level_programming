#include "main.h"

/**
 * _strncpy - The Entry Point
 *
 * a function that copies a string.
 *
 * @dest: The First Parametter
 * @src: The Second Parametter
 * @n: The Third Parametter
 *
 * Return: Char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
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
