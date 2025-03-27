#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: the size of element
 *
 * Return: void value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *arr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	arr = ptr;
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	return (arr);
}
