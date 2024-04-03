#include "main.h"

/**
 * _strcmp - The Entry Point
 *
 * a function that compares two strings.
 *
 * @s1: The First Parametter
 * @s2: The Second Parametter
 *
 * Return: Char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
