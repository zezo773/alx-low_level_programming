#include "main.h"

/**
 * _strspn - The Entry Point
 *
 * a function that gets the length of a prefix substring.
 *
 * @s: The First Parametter
 * @accept: The Second Parametter
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
