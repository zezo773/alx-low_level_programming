#include "main.h"

/**
 * _isalpha - Is An Entry Point
 *
 * @c: Is A Parameter
 *
 * Return: 1 if c is a letter, lowercase or
 * uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
