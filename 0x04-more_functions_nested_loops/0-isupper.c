#include "main.h"

/**
 * _isupper - The Entry Point
 *
 * a function that checks for uppercase character.
 *
 * @c: Is A Parametter
 *
 * Return: 1 if c is uppercase And 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
