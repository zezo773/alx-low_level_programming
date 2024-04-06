#include "main.h"

/**
 * _strlen - The Entry Point
 *
 * a function that returns the length of a string.
 *
 * @s: The Parametter
 *
 * Return: int
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
