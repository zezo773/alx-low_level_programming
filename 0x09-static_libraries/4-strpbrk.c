#include "main.h"

/**
 * _strpbrk - the entry point
 *
 * @s: the string will scan
 * @accept: the second parameter
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
