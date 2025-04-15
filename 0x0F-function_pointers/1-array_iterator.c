#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: the array of integers
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array) || !(action))
		return;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
