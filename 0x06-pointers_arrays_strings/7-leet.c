#include "main.h"

/**
 * leet - the entry point
 *
 * @s: the parameter
 *
 * Return: pointer of character
 */
char *leet(char *s)
{
	char letter[] = {"aAeEoOtTlL"};
	char leet[] = {"4433007711"};
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = leet[j];
				break;
			}
		}

		i++;
	}

	return (s);

}
