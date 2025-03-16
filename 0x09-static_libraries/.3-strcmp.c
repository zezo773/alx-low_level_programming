#include "main.h"

/**
 * _strcmp - the entry point
 *
 * @s1: the first parameter
 * @s2: the second parameter
 *
 * Return: intger value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
