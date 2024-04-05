#include "main.h"

/**
 * _strchr - The Entry Point
 *
 * a function that locates a character in a string.
 *
 * @s: The First parametter
 * @c: The Second Parametter
 *
 * Return: Char
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
