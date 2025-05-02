#include "main.h"

/**
 * set_bit - set the bit in a specific postion
 * @n: decimal number
 * @index: the index of the bit
 * Return: set value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1UL << index);

	return (1);
}
