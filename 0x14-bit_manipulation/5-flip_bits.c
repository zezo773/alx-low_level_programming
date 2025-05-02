#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count++;
		diff = diff & (diff - 1);
	}

	return count;
}
