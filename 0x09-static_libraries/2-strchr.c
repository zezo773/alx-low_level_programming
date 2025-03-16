#include "main.h"

/**
 * _strchr - the entry point
 *
 * @s: first parameter
 * @c: second parameter
 *
 * Return: character of pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
