#include "main.h"
#include <stdlib.h>

/**
 * create_array - the entry poin
 *
 * @size: first parameter
 * @c: second parameter
 *
 * Return: pointer of the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

}
