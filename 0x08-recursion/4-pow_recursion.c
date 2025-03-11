#include "main.h"

/**
 * _pow_recursion - the entry point
 *
 * @x: the first parameter
 * @y: the second parameter
 *
 * Return: intger valule
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
