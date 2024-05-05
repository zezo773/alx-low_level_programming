#include "main.h"

/**
  * create_array - function that creates an array of chars
  * initializes it with a specific char.
  * @size: size of array.
  * @c: char to initialize array with.
  *
  * Return: NULL if it fails or pointer to array.
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}
