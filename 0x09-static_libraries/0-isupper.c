#include "main.h"

/**
 * _isupper - the entry point
 *
 * @c: the test case
 *
 * Return: 1 if true 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
