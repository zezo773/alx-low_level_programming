#include "main.h"

/**
 * _islower - The Entry Point
 *
 * @c: Is A Parametter
 *
 * a function that checks for lowercase character.
 *
 * Return: 1 if c is lowercase
 *
 * Returns: 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
