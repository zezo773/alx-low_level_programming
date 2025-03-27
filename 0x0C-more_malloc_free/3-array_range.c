#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: The smallest integer in the array
 * @max: The largest integer in the array
 *
 * Return: Pointer to the newly allocated array, or NULL on failur
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = calloc((max - min + 1), sizeof(int));
	if (!arr)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		arr[i] = min + i;
	return (arr);
}
