#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - the entry point
 *
 * @s1: the first
 * @s2: the second
 * @n: the third
 *
 * Return: pointer of character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
