#include "main.h"

/**
 * _islower - the entry point
 *
 * @c: the letter that will test
 *
 * Return: 1 in true and 0 in false
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
