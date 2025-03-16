#include "main.h"

/**
 * _strlen - the entry point
 *
 * @s: test case
 *
 * Return: intger value
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
