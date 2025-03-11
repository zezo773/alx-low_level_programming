#include "main.h"

/**
 * _sqrt_helper - the helper function
 *
 * @n: the first parameter
 * @x: the second parameter
 *
 * Return: intger value
 */
int _sqrt_helper(int n, int x)
{
	if (x * x < n)
		return (_sqrt_helper(n, x + 1));
	else if (x * x > n)
		return (-1);
	return (x);
}

/**
 * _sqrt_recursion - the entry point
 *
 * @n: the parameter
 *
 * Return: intger value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}
