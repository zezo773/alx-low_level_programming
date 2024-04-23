#include "main.h"

/**
 * create_array - The Entry Point
 *
 * a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The First Parametter
 * @c: The second Parametter
 *
 * Return: NULL if size = 0 or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		array[n] = c;
	}
	return (array);
}
