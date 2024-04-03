#include "main.h"

/**
 * _strncat - The Entry Point
 *
 * a function that concatenates two strings.
 *
 * @dest: The First Parametter
 * @src: The Second Parametter
 * @n: The Third Parametter
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
