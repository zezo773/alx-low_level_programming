#include "main.h"

int check(char c);
/**
 * cap_string - uppercase the first letter of all words in the stirng
 * @s: pointer for the string
 * Return: the string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	i++;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && check(s[i - 1]))
			s[i] -= 32;

		i++;
	}

	return (s);
}

/**
 * check - the main pointer
 *
 * @c: the parameter
 *
 * Return: inger value
 */
int check(char c)
{
	char separator[] = " \t,;.!?\"(){}";

	int i = 0;
	while (separator[i] != '\0')
	{
		if (c == separator[i])
			return (1);
		i++;
	}

	return (0);
}
