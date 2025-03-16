#include "main.h"

/**
 * _strlen_recursion - the main point
 *
 * @s: the string
 *
 * Return: intger value
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
