#include "main.h"

/**
 * rev_string - the entry point
 *
 * @s: test case
 *
 * Return: void value
 */
void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
