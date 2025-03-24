#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a new allocated memory
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l2 = 0, l1 = 0;
	char *arr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	arr = (char *)malloc(sizeof(char) * (l1 + l2 + 1));

	if (!arr)
		return (NULL);

	for (i = 0; i < l1; i++)
		arr[i] = s1[i];
	for (j = 0; j < l2; j++)
		arr[i + j] = s2[j];
	arr[i + j] = '\0';

	return (arr);
}
