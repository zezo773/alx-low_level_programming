#include "main.h"

/**
 * _isdigit - Is The Entry Point
 *
 * @c: Is A Parametter
 *
 * a function that checks for a digit (0 through 9).
 *
 * Return: 1 if c is a digit And 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
