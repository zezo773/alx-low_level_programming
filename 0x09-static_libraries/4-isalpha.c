#include "main.h"

/**
 * _isalpha - the entry point
 *
 * @c: the test case
 *
 * Return: 1 if correct 0 otherwise
 */
int _isalpha(int c)
{
	/* in upper senario */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);

}
