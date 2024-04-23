#include "main.h"

/**
 * _strdup - The Entry Point
 *
 * @str: The parametter
 *
 *  function returns a pointer to a new string which
 *  is a duplicate of the string
 *
 *  Return: a copy of the string
 */

char *_strdup(char *str)
{
	char *st;
	int i, n;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	st = malloc((i + 1) * sizeof(char));

	if (st == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
	{
		st[n] = str[n];
	}
	return (st);
}
