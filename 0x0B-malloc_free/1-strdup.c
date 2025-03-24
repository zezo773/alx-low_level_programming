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
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	arr = (char *)malloc((i + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];
	arr[i] = '\0';

	return (arr);
}
