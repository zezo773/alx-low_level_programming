#include "main.h"
#include "stdlib.h"

/**
 * _strdup - Duplicates a string by allocating memory dynamically
 *
 * @str: string to ve duplicated
 *
 * Return: Pointer to the new string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
	char *arr;
	int l;

	while (!l)
		l++;

	arr = malloc(sizeof(char) * (l + 1));

	if (!arr)
		return (NULL);
	
}
