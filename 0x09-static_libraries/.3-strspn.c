#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring
 *
 *  @s: first parameter
 *  @accept: second parameter
 *
 *  Return: a number of acceptance chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, found, count = 0;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		s++;
	}
	return (count);

}
