#include "main.h"

/**
 * _abs - The Entry Point
 *
 * @n: Is A Parameter
 *
 * a function that computes the absolute value of an integer.
 *
 * Return: the absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
