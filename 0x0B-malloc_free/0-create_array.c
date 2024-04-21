#include "main.h"

/**
 * *create_array - The Entry Point
 *
 * @size: The First Parametter
 *
 * @c: The Second Parametter
 *
 * a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * Return: NULL if size = 0 or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
